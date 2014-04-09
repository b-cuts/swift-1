/*
 * Copyright (c) 2010-2014 Kevin Smith
 * Licensed under the GNU General Public License v3.
 * See Documentation/Licenses/GPLv3.txt for more information.
 */

#pragma once

#include <Swiften/Base/boost_bsignals.h>

#include <vector>
#include <string>

#include <Swiften/JID/JID.h>
#include <Swift/Controllers/Chat/UserSearchController.h>
#include <Swift/Controllers/Contact.h>

namespace Swift {

	class UserSearchWindow {
		public:
			enum Type {AddContact, ChatToContact, InviteToChat};
			virtual ~UserSearchWindow() {}

			virtual void clear() = 0;
			virtual void setResults(const std::vector<UserSearchResult>& results) = 0;
			virtual void setResultsForm(const Form::ref results) = 0;
			virtual void addSavedServices(const std::vector<JID>& services) = 0;
			virtual void setSelectedService(const JID& service) = 0;
			virtual void setServerSupportsSearch(bool support) = 0;
			virtual void setSearchError(bool support) = 0;
			virtual void setSearchFields(boost::shared_ptr<SearchPayload> fields) = 0;
			virtual void setNameSuggestions(const std::vector<std::string>& suggestions) = 0;
			virtual void prepopulateJIDAndName(const JID& jid, const std::string& name) = 0;
			virtual void setContactSuggestions(const std::vector<Contact::ref>& suggestions) = 0;
			virtual void setJIDs(const std::vector<JID>&) = 0;
			virtual void setRoomJID(const JID& roomJID) = 0;
			virtual std::string getReason() const = 0;
			virtual std::vector<JID> getJIDs() const = 0;
			virtual void setCanStartImpromptuChats(bool supportsImpromptu) = 0;
			virtual void updateContacts(const std::vector<Contact::ref>& contacts) = 0;
			virtual void addContacts(const std::vector<Contact::ref>& contacts) = 0;

			virtual void show() = 0;

			boost::signal<void (const JID&)> onFormRequested;
			boost::signal<void (boost::shared_ptr<SearchPayload>, const JID&)> onSearchRequested;
			boost::signal<void (const JID&)> onNameSuggestionRequested;
			boost::signal<void (const std::string&)> onContactSuggestionsRequested;
			boost::signal<void (const std::vector<JID>&)> onJIDUpdateRequested;
			boost::signal<void (const std::vector<JID>&)> onJIDAddRequested;
	};
}
