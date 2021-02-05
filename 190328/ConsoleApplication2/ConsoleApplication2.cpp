#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14159;

	double radius;
	cout << "반지름을 입력하시오: ";
	cin >> radius;

	double area = radius * radius * PI;
	double l = 2 * PI * radius;

	cout << "원의 면적: " << area << endl;
	cout << "원의 둘레: " << l << endl;

	return 0;

}