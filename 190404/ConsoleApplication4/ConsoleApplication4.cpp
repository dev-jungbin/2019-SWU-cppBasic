#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3, a, s1, s2, s3, s, ss;
	cout << "Enter three points for a triangle: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	s1 = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	s2 = pow(pow(x3 - x2, 2) + pow(y3 - y2, 2), 0.5);
	s3 = pow(pow(x3 - x1, 2) + pow(y1 - y1, 2), 0.5);
	s = (s1 + s2 + s3) / 2;
	ss = pow(s*(s - s1)*(s - s2)*(s - s3), 0.5);

	cout << "The area of the triangle is " << ss;

	return 0;
}