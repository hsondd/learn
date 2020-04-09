#include <iostream>

class dateClass
{
public:
	int m_year;
	int m_month;
	int m_day;

	void print()
	{
		std::cout << m_year << "/" << m_month << "/" << m_day;
	}

	// dateClass();
	// ~dateClass();
	
};

int main()
{
	dateClass today{2020,10,10};
	today.m_day = 16;
	today.print();

	return 0;
}