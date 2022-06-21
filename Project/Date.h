#ifndef DATE
#define DATE

class Date
{
public:

	int monthsPerYear = 12;

	Date(int m = 1, int d = 1, int y = 1900);

	void print();

	int day;
	int month;
	int year;

};

#endif