#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int totalSeconds = time(0);
	int currentSeconds = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinutes = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHours = totalHours % 24;
	int currentdays = totalHours / 24;

	cout << "Current time is " << currentdays << " days " << currentHours << ":" << currentMinutes << ":" << currentSeconds << " GMT" << endl;

	return 0;
}