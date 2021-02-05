#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14159;

	double r;
	cout << "Enter the radius of the bounding circle: ";
	cin >> r;
	cout << "The coordinates of five points on the pentagon are \n" 
		<< "(" << 0.0 << ", " << r << ")\n"
		<< "(" << r * cos(PI / 180*18) << ", " << r * sin(PI / 180 * 18) << ")\n"
		<< "(" << r * cos(PI / 180 * 54) << ", " << -r * sin(PI / 180 * 54) << ")\n"
		<< "(" << -r * cos(PI / 180 * 54) << ", " << -r * sin(PI / 180 * 54) << ")\n"
		<< "(" << -r * cos(PI / 180 * 18) << ", " << r * sin(PI / 180 * 18) << ")\n";
}
