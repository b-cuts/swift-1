#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

#include "Swift/Controllers/XMPPRosterController.h"
#include "Swiften/Elements/Payload.h"
#include "Swiften/Elements/RosterItemPayload.h"
#include "Swiften/Elements/RosterPayload.h"
#include "Swiften/Queries/DummyIQChannel.h"
#include "Swiften/Queries/IQRouter.h"
#include "Swiften/Roster/XMPPRoster.h"

using namespace Swift;

class XMPPRosterControllerTest : public CppUnit::TestFixture
{
		CPPUNIT_TEST_SUITE(XMPPRosterControllerTest);
		CPPUNIT_TEST(testAdd);
		CPPUNIT_TEST(testModify);
		CPPUNIT_TEST(testRemove);
		CPPUNIT_TEST_SUITE_END();

	public:
		XMPPRosterControllerTest() {}

		void setUp() {
			channel_ = new DummyIQChannel();
			router_ = new IQRouter(channel_);
			xmppRoster_ = boost::shared_ptr<XMPPRoster>(new XMPPRoster());
		}

		void tearDown() {
			delete channel_;
			delete router_;
		}

		void testAdd() {
			XMPPRosterController controller(router_, xmppRoster_);

			boost::shared_ptr<RosterPayload> payload(new RosterPayload());
			payload->addItem(RosterItemPayload(JID("foo@bar.com"), "Bob", RosterItemPayload::Both));
			channel_->onIQReceived(IQ::createRequest(IQ::Set, JID(), "eou", payload));

			CPPUNIT_ASSERT(xmppRoster_->containsJID(JID("foo@bar.com")));
			CPPUNIT_ASSERT_EQUAL(String("Bob"), xmppRoster_->getNameForJID(JID("foo@bar.com")));
		}

		void testModify() {
			XMPPRosterController controller(router_, xmppRoster_);
			boost::shared_ptr<RosterPayload> payload1(new RosterPayload());
			payload1->addItem(RosterItemPayload(JID("foo@bar"), "Bob", RosterItemPayload::Both));
			channel_->onIQReceived(IQ::createRequest(IQ::Set, JID(), "id1", payload1));

			boost::shared_ptr<RosterPayload> payload2(new RosterPayload());
			payload2->addItem(RosterItemPayload(JID("foo@bar"), "Bob2", RosterItemPayload::Both));
			channel_->onIQReceived(IQ::createRequest(IQ::Set, JID(), "id2", payload2));

			CPPUNIT_ASSERT_EQUAL(String("Bob2"), xmppRoster_->getNameForJID(JID("foo@bar")));
		}

		void testRemove() {
			XMPPRosterController controller(router_, xmppRoster_);
			boost::shared_ptr<RosterPayload> payload1(new RosterPayload());
			payload1->addItem(RosterItemPayload(JID("foo@bar"), "Bob", RosterItemPayload::Both));
			channel_->onIQReceived(IQ::createRequest(IQ::Set, JID(), "id1", payload1));

			boost::shared_ptr<RosterPayload> payload2(new RosterPayload());
			payload2->addItem(RosterItemPayload(JID("foo@bar"), "Bob", RosterItemPayload::Remove));
			channel_->onIQReceived(IQ::createRequest(IQ::Set, JID(), "id2", payload2));
			CPPUNIT_ASSERT(!xmppRoster_->containsJID(JID("foo@bar")));
		}

	private:
		DummyIQChannel* channel_;
		IQRouter* router_;
		boost::shared_ptr<XMPPRoster> xmppRoster_;
};

CPPUNIT_TEST_SUITE_REGISTRATION(XMPPRosterControllerTest);


