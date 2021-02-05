#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	
	cout << "\n<문제 #1>" << endl;
	cout << "0 과 9 사이의 정수를 3개 입력하세요: ";
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	n1 = n1 * 100;
	n2 = n2 * 10;
	cout << "==> 3개의 수로 이루어진 십진수: " << n1 + n2 + n3 << endl;
	

	cout << "\n<문제 #2>" << endl;
	cout << "0 과 1000 사이의 정수를 입력하세요: ";
	int n, t1, t2, t3, t4, temp;
	cin >> n;

	t1 = n % 10;

	t2 = (n/10) % 10;

	t3 = (n /100)% 10;

	t4 = (n/1000) % 10;
	
	cout << "각 자리수의 합: " << t1 + t2 + t3+ t4 << endl;


	return 0;

}