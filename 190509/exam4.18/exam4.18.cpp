#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	string s;
	s = static_cast<char>('A' + rand() % ('Z' - 'A' + 1));
	s += static_cast<char>('A' + rand() % ('Z' - 'A' + 1));
	s += static_cast<char>('A' + rand() % ('Z' - 'A' + 1));
	cout << s;
	return 0;
}