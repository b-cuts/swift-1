/*
 * Copyright (c) 2013 Tobias Markmann
 * Licensed under the simplified BSD license.
 * See Documentation/Licenses/BSD-simplified.txt for more information.
 */

/*
 * Copyright (c) 2016 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#include <Swift/QtUI/Roster/RosterTooltip.h>

#include <QApplication>
#include <QObject>
#include <QString>

#include <Swiften/Base/Path.h>

#include <Swift/Controllers/Roster/ContactRosterItem.h>
#include <Swift/Controllers/StatusUtil.h>

#include <Swift/QtUI/QtResourceHelper.h>
#include <Swift/QtUI/QtScaledAvatarCache.h>
#include <Swift/QtUI/QtSwiftUtil.h>
#include <Swift/QtUI/QtUtilities.h>

using namespace QtUtilities;

namespace Swift {

QString RosterTooltip::buildDetailedTooltip(ContactRosterItem* contact, QtScaledAvatarCache* cachedImageScaler) {
    QString tooltipTemplate;
    if (QApplication::layoutDirection() == Qt::RightToLeft) {
        tooltipTemplate = QString(
            "<table style='white-space:pre'>"
                "<tr>"
                    "<td>"
                        "<img src=\"%1\" />"
                    "</td>"
                    "<td>"
                        "<p style='font-size: 14px'>%3 %2</p>"
                        "<table><tr><td valign='middle'>%5</td><td valign='middle'>%4</td></tr></table>"
                        "%6"
                        "%7"
                        "%8"
                        "%9"
                    "</td>"
                "</tr>"
            "</table>");
    } else {
        tooltipTemplate = QString(
            "<table style='white-space:pre'>"
                "<tr>"
                    "<td>"
                        "<img src=\"%1\" />"
                    "</td>"
                    "<td>"
                        "<p style='font-size: 14px'>%2 %3</p>"
                        "<table><tr><td valign='middle'>%4</td><td valign='middle'>%5</td></tr></table>"
                        "%6"
                        "%7"
                        "%8"
                        "%9"
                    "</td>"
                "</tr>"
            "</table>");
    }
    // prepare tooltip
    QString fullName = P2QSTRING(contact->getDisplayName());

    QString vCardSummary;
    VCard::ref vCard = contact->getVCard();
    if (vCard) {
        fullName = P2QSTRING(vCard->getFullName()).trimmed();
        if (fullName.isEmpty()) {
            fullName = (P2QSTRING(vCard->getGivenName()) + " " + P2QSTRING(vCard->getFamilyName())).trimmed();
        }
        if (fullName.isEmpty()) {
            fullName = P2QSTRING(contact->getDisplayName());
        }
        vCardSummary = buildVCardSummary(vCard);
    } else {
        contact->onVCardRequested();
    }

    QString scaledAvatarPath = cachedImageScaler->getScaledAvatarPath(P2QSTRING(contact->getAvatarPath().empty() ? ":/icons/avatar.png" : pathToString(contact->getAvatarPath())));

    QString bareJID = contact->getDisplayJID().toString().empty() ? "" : "( " + P2QSTRING(contact->getDisplayJID().toString()) + " )";

    QString presenceIconTag = QString("<img src='%1' />").arg(statusShowTypeToIconPath(contact->getStatusShow()));

    QString statusMessage = contact->getStatusText().empty() ? QObject::tr("(No message)") : P2QSTRING(contact->getStatusText());

    QString idleString = P2QSTRING(contact->getIdleText());
    if (!idleString.isEmpty()) {
        idleString = QObject::tr("Idle since %1").arg(idleString);
        idleString = htmlEscape(idleString) + "<br/>";
    }

    QString lastSeen = P2QSTRING(contact->getOfflineSinceText());
    if (!lastSeen.isEmpty()) {
        lastSeen = QObject::tr("Last seen %1").arg(lastSeen);
        lastSeen = htmlEscape(lastSeen) + "<br/>";
    }

    QString mucOccupant= P2QSTRING(contact->getMUCAffiliationText());
    if (!mucOccupant.isEmpty()) {
        mucOccupant = htmlEscape(mucOccupant) + "<br/>";
    }

    return tooltipTemplate.arg(scaledAvatarPath, htmlEscape(fullName), htmlEscape(bareJID), presenceIconTag, htmlEscape(statusMessage), mucOccupant, idleString, lastSeen, vCardSummary);
}

QString RosterTooltip::buildVCardSummary(VCard::ref vcard) {
    QString summary;
    summary = "<table>";

    // star | name | content
    QString currentBlock;
    foreach (const VCard::Telephone& tel, vcard->getTelephones()) {
        QString type = tel.isFax ? QObject::tr("Fax") : QObject::tr("Telephone");
        QString field = buildVCardField(tel.isPreferred, type, htmlEscape(P2QSTRING(tel.number)));
        if (tel.isPreferred) {
            currentBlock = field;
            break;
        }
        currentBlock += field;
    }
    summary += currentBlock;

    currentBlock = "";
    foreach (const VCard::EMailAddress& mail, vcard->getEMailAddresses()) {
        QString field = buildVCardField(mail.isPreferred, QObject::tr("E-Mail"), htmlEscape(P2QSTRING(mail.address)));
        if (mail.isPreferred) {
            currentBlock = field;
            break;
        }
        currentBlock += field;
    }
    summary += currentBlock;

    currentBlock = "";
    foreach (const VCard::Organization& org, vcard->getOrganizations()) {
        QString field = buildVCardField(false, QObject::tr("Organization"), htmlEscape(P2QSTRING(org.name)));
        currentBlock += field;
    }
    summary += currentBlock;

    currentBlock = "";
    foreach(const std::string& title, vcard->getTitles()) {
        QString field = buildVCardField(false, QObject::tr("Title"), htmlEscape(P2QSTRING(title)));
        currentBlock += field;
    }
    summary += currentBlock;

    summary += "</table>";
    return summary;
}

QString RosterTooltip::buildVCardField(bool preferred, const QString& name, const QString& content) {
    QString rowTemplate;
    if (QApplication::layoutDirection() == Qt::RightToLeft) {
        rowTemplate = QString("<tr><td>%3</td><td valign='middle'><strong>%2</strong></td><td valign='middle'>%1</td></tr>");
    } else {
        rowTemplate = QString("<tr><td>%1</td><td valign='middle'><strong>%2</strong></td><td valign='middle'>%3</td></tr>");
    }
    return  rowTemplate.arg(preferred ? "<img src=':/icons/star-checked.png' />" : "", name, content);
}

}
