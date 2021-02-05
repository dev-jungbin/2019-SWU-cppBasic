#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double month = 0.00417;
	double save, total;
	cout << "월 저축액을 입력하세요: ";
	cin >> save;

	total = save * (1 + month);
	cout << "1달 후 금액: " << total << endl;

	total = (save + total) * (1 + month);
	cout << "2달 후 금액: " << total << endl;

	total = (save + total) * (1 + month);
	cout << "3달 후 금액: " << total << endl;

	total = (save + total) * (1 + month);
	cout << "4달 후 금액: " << total << endl;

	total = (save + total) * (1 + month);
	cout << "5달 후 금액: " << total << endl;

	total = (save + total) * (1 + month);
	cout << "6달 후 금액: " << total << endl;

	return 0;
}