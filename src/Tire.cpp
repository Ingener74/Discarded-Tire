/*
 * Tire.cpp
 *
 *  Created on: 14 окт. 2015 г.
 *      Author: Pavel
 */

#include <iostream>
#include <thread>

#include "Tire.h"

namespace tire {

using namespace std;

Tire::Tire() {
	thread th([]{
			cout << "Tire" << endl;
	});
	th.join();
}

Tire::~Tire() {
}

} /* namespace tire */
