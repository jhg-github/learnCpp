/*
 * Tweeter.cpp
 *
 *  Created on: May 7, 2020
 *      Author: javi
 */

#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;

Tweeter::Tweeter(std::string first, std::string last, int arbitrary,
		std::string handle) :
		Person(first, last, arbitrary), tweeterhandle(handle) {
	cout << "constructing tweeter " << tweeterhandle << endl;
}

Tweeter::~Tweeter() {
	cout << "destructing tweeter " << tweeterhandle << endl;
}
