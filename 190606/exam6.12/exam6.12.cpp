#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
void m(int i) {
	double result = 0;
	cout << "i\t" << "m(i)" << endl;

	for (int a = 1; a <= i; a++) {
		double temp = static_cast<double> (a);
		result += temp / (temp + 1);

		cout << a << "\t" << result << endl;
	}
}
int main()
{
	int i = 20;
	m(i);


	return 0;
}
