/*
 * Person.h
 *
 *  Created on: May 7, 2020
 *      Author: javi
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	Person(std::string first, std::string last, int arbitrary);
	//Person()=default;	// generates an empty constructor
	Person();
	~Person();
	std::string getName() const;	// const => doesn't change members of the class
	int GetNumber() const { return arbitrarynumber;}
	void SetNumber(int number) {arbitrarynumber = number;}
};




#endif /* PERSON_H_ */
