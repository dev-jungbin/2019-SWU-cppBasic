#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3, temp;
	cout << "3개의 정수를 입력하세요. : ";
	cin >> n1 >> n2 >> n3;

	if (n1 > n2) {
		temp = n2;
		n2 = n1;
		n1 = temp;
	}
	if (n2 > n3) {
		temp = n3;
		n3 = n2;
		n2 = temp;
	}
	if (n1 > n2) {
		temp = n2;
		n2 = n1;
		n1 = temp;
	}

	cout << "3개의 정수를 오름차순으로 정렬 : " << n1 << " " << n2 << " " << n3;

}
