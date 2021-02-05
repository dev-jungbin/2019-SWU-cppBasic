﻿#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);

	int numberOfOneDollars = remainingAmount / 100;
	remainingAmount = remainingAmount % 100;

	int numberOfQuarters = remainingAmount / 25;
	remainingAmount = remainingAmount % 25;

	int numberOfDimes = remainingAmount / 10;
	remainingAmount = remainingAmount % 10;

	int numberOfNickels = remainingAmount / 5;
	remainingAmount = remainingAmount % 5;

	int numberOfPennies = remainingAmount;

	cout << "Your amount " << amount << " consists of " << endl;

	if (numberOfOneDollars == 1)
		cout << " " << numberOfOneDollars << " dollar" << endl;
	else if (numberOfOneDollars >= 2)
		cout << " " << numberOfOneDollars << " dollars" << endl;

	if (numberOfQuarters == 1)
		cout << " " << numberOfQuarters << " quarter" << endl;
	else if (numberOfQuarters >= 2)
		cout << " " << numberOfQuarters << " quarters" << endl;

	if (numberOfDimes == 1)
		cout << " " << numberOfDimes << " dime" << endl;
	else if (numberOfDimes >= 2)
		cout << " " << numberOfDimes << " dimes" << endl;

	if (numberOfNickels == 1)
		cout << " " << numberOfNickels << " nickel" << endl;
	else if (numberOfNickels >= 2)
		cout << " " << numberOfNickels << " nickels" << endl;
		
	if (numberOfPennies == 1)
		cout << " " << numberOfPennies << " penny" << endl;
	else if (numberOfPennies >= 2)
		cout << " " << numberOfPennies << " pennies" << endl;

	return 0;

}
