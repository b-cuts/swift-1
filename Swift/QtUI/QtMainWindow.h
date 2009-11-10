#ifndef SWIFT_QtMainWindow_H
#define SWIFT_QtMainWindow_H

#include <QWidget>
#include <QMenu>
#include "Swift/Controllers/MainWindow.h"
#include "Swift/QtUI/QtRosterHeader.h"
#include "Swift/QtUI/EventViewer/EventView.h"

#include <vector>

class QComboBox;
class QLineEdit;
class QPushButton;
class QToolBar;
class QAction;

class QTabWidget;

namespace Swift {
	class QtTreeWidget;
	class QtTreeWidgetFactory;
	class TreeWidget;

	class QtMainWindow : public QWidget, public MainWindow {
		Q_OBJECT
		public:
			QtMainWindow(QtTreeWidgetFactory *treeWidgetFactory);
			TreeWidget* getTreeWidget();
			std::vector<QMenu*> getMenus() {return menus_;}
			void setMyName(const String& name);
			void setMyAvatarPath(const String& path);
			void setMyStatusText(const String& status);
			void setMyStatusType(const StatusShow::Type type);
		private slots:
			void handleStatusChanged(StatusShow::Type showType, const QString &statusMessage);
			void handleShowOfflineToggled(bool);
			void handleJoinMUCAction();
			void handleSignOutAction();
			void handleJoinMUCDialogComplete(const JID& muc, const QString& nick);
			void handleAddContactDialogComplete(const JID& contact, const QString& name);
			void handleAddActionTriggered(bool checked);
		private:
			std::vector<QMenu*> menus_;
			QLineEdit* muc_;
			QLineEdit* mucNick_;
			QPushButton* mucButton_;
			QtTreeWidget* treeWidget_;
			QtRosterHeader* meView_;
			QAction* addAction_;
			QTabWidget* tabs_;
			QWidget* contactsTabWidget_;
			QWidget* eventsTabWidget_;
			EventView* eventView_;
	};
}

#endif

