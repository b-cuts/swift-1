/*
 * Copyright (c) 2010 Remko Tronçon
 * Licensed under the GNU General Public License v3.
 * See Documentation/Licenses/GPLv3.txt for more information.
 */

#include <boost/bind.hpp>
#include <boost/thread.hpp>

#include "Swiften/Client/Client.h"
#include "Swiften/Network/TimerFactory.h"
#include "Swiften/Network/BoostNetworkFactories.h"
#include "Swiften/EventLoop/EventLoop.h"
#include "Swiften/EventLoop/SimpleEventLoop.h"
#include "Swiften/Roster/GetRosterRequest.h"
#include "Swiften/Client/ClientXMLTracer.h"
#include <Swiften/Base/sleep.h>
#include <Swiften/TLS/BlindCertificateTrustChecker.h>

using namespace Swift;

SimpleEventLoop eventLoop;
BoostNetworkFactories networkFactories(&eventLoop);
int numberOfConnectedClients = 0;

void handleConnected() {
	numberOfConnectedClients++;
	std::cout << "Connected " << numberOfConnectedClients << std::endl;
}

int main(int, char**) {
	int numberOfInstances = 1000;

	char* jid = getenv("SWIFT_BENCHTOOL_JID");
	if (!jid) {
		std::cerr << "Please set the SWIFT_BENCHTOOL_JID environment variable" << std::endl;
		return -1;
	}
	char* pass = getenv("SWIFT_BENCHTOOL_PASS");
	if (!pass) {
		std::cerr << "Please set the SWIFT_BENCHTOOL_PASS environment variable" << std::endl;
		return -1;
	}

	BlindCertificateTrustChecker trustChecker;
	std::vector<CoreClient*> clients;
	for (int i = 0; i < numberOfInstances; ++i) {
		CoreClient* client = new Swift::CoreClient(&eventLoop, &networkFactories, JID(jid), String(pass));
		client->setCertificateTrustChecker(&trustChecker);
		client->onConnected.connect(&handleConnected);
		clients.push_back(client);
	}
	
	for (size_t i = 0; i < clients.size(); ++i) {
		clients[i]->connect();
	}

	{
		Timer::ref timer = networkFactories.getTimerFactory()->createTimer(30000);
		timer->onTick.connect(boost::bind(&SimpleEventLoop::stop, &eventLoop));
		timer->start();

		eventLoop.run();
	}

	for (size_t i = 0; i < clients.size(); ++i) {
		delete clients[i];
	}

	return 0;
}