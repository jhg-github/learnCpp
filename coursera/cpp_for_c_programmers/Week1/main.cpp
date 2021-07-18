/*
 * main.cpp
 *
 *  Created on: Nov 9, 2019
 *      Author: javi
 */

/* Convert this program to C++
 * change to C++ io
 * change to one line comments
 * change defines of constants to const
 * change array to vector<>
 * inline any short function


#include <stdio.h>

#define N 40

void sum(int *p, int n, int d[]){
	int i;
	*p = 0;
	for (i = 0; i < n; ++i)
		*p = *p + d[i];
}

int main(){
	int i;
	int accum = 0;
	int data[N];
	for (i = 0; i < N; ++i)
		data[i] = i;
	sum(&accum, N, data);
	printf("sum is %d\n", accum);
	return 0;
}
 */


#include <iostream>
#include <vector>

const int N = 40;

//// (1)
//inline void sum(int &p, int n, std::vector<int> &d){
//	p = 0;
//	for (int i = 0; i < n; ++i)
//		p = p + d[i];
//}
//
//int main(){
//	int accum = 0;
//	std::vector<int> data (N);
//	for (int i = 0; i < N; ++i)
//		data[i] = i;
//	sum(accum, N, data);
//	std::cout << "sum is " << accum;
//	return 0;
//}


//// (2)
//template <class Summable>
//Summable sum( const std::vector<Summable> &d, int size, Summable s=0){
//	for (int i = 0; i < size; ++i)
//		s += d[i];
//	return s;
//}
//
//int main(){
//	std::vector<int> data (N);
//	for (int i = 0; i < N; ++i)
//		data[i] = i;
//	int accum = 0;
//	accum = sum(data, N, accum);
//	std::cout << "sum is " << accum;
//	return 0;
//}


// (3)
template <class Summable>
Summable sum( const std::vector<Summable> &d, int size, Summable s=0){
	for (int i = 0; i < size; ++i)
		s += d[i];
	return s;
}

int main(){
	std::vector<double> data (N);
	for (int i = 0; i < N; ++i)
		data[i] = i + 0.01;
	double accum1 = 0;
	accum1 = sum(data, N);			// s=0 as default
	std::cout << "accum1 is " << accum1 << std::endl;
	double accum2 = 0;
	accum2 = sum(data, N, 1000.0);	// s=1000
	std::cout << "accum2 is " << accum2;
	return 0;
}
