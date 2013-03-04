/*
 * Copyright (c) 2010-2013 Remko Tronçon
 * Licensed under the GNU General Public License v3.
 * See Documentation/Licenses/GPLv3.txt for more information.
 */

#include "QtUtilities.h"

#include <QTextDocument>
#include <QWidget>
#if defined (Q_OS_UNIX) && !defined(Q_OS_MAC)
#include <QX11Info>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#endif

#include "Swift/Controllers/ApplicationInfo.h"

namespace QtUtilities {

void setX11Resource(QWidget* widget, const QString& c) {
#if defined (Q_OS_UNIX) && !defined(Q_OS_MAC)
	char res_class[] = SWIFT_APPLICATION_NAME;
	XClassHint hint;
	hint.res_name = (QString(SWIFT_APPLICATION_NAME) + "-" + c).toUtf8().data();
	hint.res_class = res_class;
	XSetClassHint(widget->x11Info().display(), widget->winId(), &hint);
#else
	(void) widget;
	(void) c;
#endif
}

QString htmlEscape(const QString& s) {
#if QT_VERSION >= 0x050000
	return s.toHtmlEscaped();
#else
	return Qt::escape(s);
#endif
}

}
