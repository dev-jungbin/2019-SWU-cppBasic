#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double s1, s2, s3;

	cout << "3변의 길이를 입력하시오 : " ;
	cin >> s1 >> s2 >> s3;

	bool a = s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2;

	switch (a) {
	case true: cout << "삼각형의 둘레는 " << s1 + s2 + s3 ; break;
	default:  cout << "삼각형을 구성하지 못합니다!!";
	}
	
	return 0;
}
