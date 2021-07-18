//============================================================================
// Name        : CH5_ClassesAndObjects.cpp
// Author      : javi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"

using std::cout;
using std::endl;
using std::string;


int main() {
	int i = 0;
	i = !i;
	i = 1;
	i = !i;
	Person p1("Javi", "Hi", 13);
	{
		Tweeter t1("Someone", "Else", 456, "@whoever");
		string name2 = t1.getName();
	}
	cout << "after innermost block" << endl;
	string name = p1.getName();

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

	return 0;
}
