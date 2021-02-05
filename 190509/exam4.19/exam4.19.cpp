#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first, second, third, c1;
    cout << "Enter the first city: ";
	getline(cin, first);
	cout << "Enter the second city: ";
	getline(cin, second);
	cout << "Enter the third city: ";
	getline(cin, third);

	if (first >= second) {
		c1 = second;
		second = first;
		first = c1;
	}
	else if (second >= third) {
		c1 = third;
		third = second;
		second = c1;
	}
	if (first >= second) {
		c1 = second;
		second = first;
		first = c1;
	}
	cout << "The three cities in alphabetical ordr are " << first << " " << second << " " << third;


}
