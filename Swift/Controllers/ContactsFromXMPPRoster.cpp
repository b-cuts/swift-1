/*
 * Copyright (c) 2013 Tobias Markmann
 * Licensed under the simplified BSD license.
 * See Documentation/Licenses/BSD-simplified.txt for more information.
 */

/*
 * Copyright (c) 2014 Kevin Smith and Remko Tronçon
 * Licensed under the GNU General Public License v3.
 * See Documentation/Licenses/GPLv3.txt for more information.
 */

#include <Swift/Controllers/ContactsFromXMPPRoster.h>

#include <Swiften/Base/foreach.h>

#include <Swiften/Avatars/AvatarManager.h>
#include <Swiften/Presence/PresenceOracle.h>
#include <Swiften/Roster/XMPPRoster.h>
#include <Swiften/Roster/XMPPRosterItem.h>

namespace Swift {

ContactsFromXMPPRoster::ContactsFromXMPPRoster(XMPPRoster* roster, AvatarManager* avatarManager, PresenceOracle* presenceOracle) : roster_(roster), avatarManager_(avatarManager), presenceOracle_(presenceOracle) {
}

ContactsFromXMPPRoster::~ContactsFromXMPPRoster() {
}

std::vector<Contact::ref> ContactsFromXMPPRoster::getContacts() {
	std::vector<Contact::ref> results;
	std::vector<XMPPRosterItem> rosterItems = roster_->getItems();
	foreach(const XMPPRosterItem& rosterItem, rosterItems) {
		Contact::ref contact = boost::make_shared<Contact>(rosterItem.getName().empty() ? rosterItem.getJID().toString() : rosterItem.getName(), rosterItem.getJID(), StatusShow::None,"");
		contact->statusType = presenceOracle_->getHighestPriorityPresence(contact->jid) ? presenceOracle_->getHighestPriorityPresence(contact->jid)->getShow() : StatusShow::None;
		contact->avatarPath = avatarManager_->getAvatarPath(contact->jid);
		results.push_back(contact);
	}
	return results;
}

}
