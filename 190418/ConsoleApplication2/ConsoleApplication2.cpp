#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int month, year,days;
	cout << "달을 입력하시오 (예를 들어, 1월은 1, 2월은 2, 등등): ";
	cin >> month;
	cout << "연도를 입력하시오: ";
	cin >> year;

	switch (month)
	{
		case 1: 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: days = 31; break;
		case 2:  {//윤년
			bool i = (year % 4 == 0 && (year % 100) != 0) || (year % 400 == 0);
			if (i == true)
				days = 29;
			else
				days = 28;
		} break;
		dafault : days = 30;
	}
	
	cout << year << "년, " << month << "월: " << days << "일 입니다.";

}
