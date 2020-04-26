#include <iostream>
#include <string>

using namespace std;

int main()
{
	//length
	// string my_quote = "By my will, this shall be finished";
	// cout << "Length of the quote: " << my_quote.length() << endl;
	// cout << "Length of the quote: " << my_quote.size() << endl;


	//empty-clear
	// string str = "This is a sample string";
	// str.clear();
	// if (str.empty())
	// {
	// 	cout << "str is now empty." endl;
	// }

	//duyet phan tu
	string str = "learn from other people";
	for (int32_t index = 0; index <= str.length() - 1; index++)
	{
		cout << str[index];
	}
	cout << endl;
	for (int32_t index = 0; index <= str.length() - 1; index++)
	{
		cout << str.at(index);
	}
	cout << "\nFirst: " << str.front() << endl;
	cout << "Last: " << str.back() << endl;

	return 0;
}