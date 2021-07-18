/*
 * main.cpp
 *
 *  Created on: Apr 14, 2020
 *      Author: javi
 */

#include <iostream>

using namespace std;

template <class T>
T sum(const T data[], int size, T s=0){
	for (int i = 0; i < size; ++i)
		s += data[i];
	return s;
}

template <class T>
T subs(const T data[], int size, T s=0){
	for (int i = 0; i < size; ++i)
		s -= data[i];
	return s;
}

template <class T>
void output(const T data[], int size){
	for (int i = 0; i < size; ++i)
		cout << data[i] << ", ";
	cout << endl;
}

int main(){
	cout << "template for sum()" << endl;
	int a[] ={1,2,3};
	double b[]={2.1,2.2,2.3};
	cout << "sum(a,3) = "  << sum(a,3) << endl;
	cout << "sum(b,3) = " << sum(b,3) << endl;
	cout << "subs(a,3) = "<< subs(a,3) << endl;
	cout << "subs(b,3) = "<< subs(b,3) << endl;
	output(a,3);
	output(b,3);
	return 0;
}
