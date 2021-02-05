#include "pch.h"
#include <iostream>
using namespace std;

int length;

int reverse(int number)
{
	int temp, n, result=0;
	int l = 0;

	for (n = number; n > 0; n /= 10) {
		l++;
	}
	n = number;

	for (temp = l; temp > 0; temp--) {
		result += pow(10, (temp-1)) * (number % 10);
		number/=10;
	}
	int length = l;

	return result; 
}

bool isPalindrome(int number)
{
	bool result=false;
	if (number == reverse(number))
		result = true;
	return result;
}

int main()
{
	int number;

    cout << "정수를 입력하세요.: "; 
	cin >> number;

	if (isPalindrome(number) == 1)
		cout << "회문입니다.";
	else
		cout << "회문이 아닙니다.";

	return 0;

}
