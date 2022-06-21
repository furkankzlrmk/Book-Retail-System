#include "Date.h"
#include <stdexcept>
#include <chrono>
#include <iostream>
using namespace std;

Date::Date(int m, int d, int y)   // Validation
{
	if (m > 0 && m <= monthsPerYear)
		month = m;
	else
		throw invalid_argument("month must be 1-12");
	day = d;
	year = y;
}


void Date::print()
{
	cout << month << "/" << day << "/" << year;
}
