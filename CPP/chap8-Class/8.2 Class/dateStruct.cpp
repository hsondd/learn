#include <iostream>

struct DateStruct
{
	int year;
	int month;
	int day;
};

void print(const DateStruct &date)
{
	std::cout << date.year << "/" << date.month << "/" << date.day;
}

int main()
{
	DateStruct today {2020,4,10};

	today.day = 16;
	print(today);
	return 0;
}