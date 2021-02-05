#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int year,m,j,k,h,q;
	cout << "Enter year: (e.g., 2012): ";
	cin >> year;
	cout << "Enter month: 1-12: ";
	cin >> m;
	cout << "Enter the day of the month: 1-31: ";
	cin >> q;
	
	if (m < 3) {
		m += 12;
		year--;
	}

	j = year / 100;
	k = year % 100;
	
	h = (q + (26*(m+1)/10) + k + k / 4 + j / 4 + 5 * j) % 7;

	cout << "Day of the week is ";
	switch (h) {
	case 0: cout << "Saturday"; break;
	case 1: cout << "Sunday"; break;
	case 2: cout << "Monday"; break;
	case 3: cout << "Tuesday"; break;
	case 4: cout << "Wednesday"; break;
	case 5: cout << "Thursday"; break;
	case 6: cout << "Friday"; break;
	}

	return 0;
}
