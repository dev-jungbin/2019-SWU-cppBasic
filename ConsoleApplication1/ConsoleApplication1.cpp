#include "pch.h"
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

int main()
{
	string s = "ABCD";
	for (int i = 0, j = s.size() /2; i < s.size(); i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	cout << "The reversed string is " << s << endl ;
}
