#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double r, s, A;
	const double PI = 3.14159;
	cout << "Enter the length from the center to a vertex: ";
	cin >> r;
	s = r * sin(PI / 180 * 72) / sin(PI / 180 * 54);
	A = 5*(pow(s,2))/(4*tan(PI / 5));

	cout << "The area of the pentagon is " << A;

}