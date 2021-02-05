#include "pch.h"
#include <iostream>
using namespace std;

void reverse(int number)
{
	int temp, n, result = 0;
	int l = 0;

	for (n = number; n > 0; n /= 10) {
		l++;
	}
	n = number;

	for (temp = l; temp > 0; temp--) {
		result += pow(10, (temp - 1)) * (number % 10);
		number /= 10;
	}

	cout << "역순: " << result;
}


int main()
{
	int number;

	cout << "정수를 입력하세요.: ";
	cin >> number;

	reverse(number);

	return 0;
}
