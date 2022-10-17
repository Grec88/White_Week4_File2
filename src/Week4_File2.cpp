//============================================================================
// Name        : Week4_File2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ifstream input("input.txt");
	if(input){
		double num;
		while(input >> num) {
		cout << fixed << setprecision(3);
		cout << num << "\n";
		}
	}
	return 0;
}
