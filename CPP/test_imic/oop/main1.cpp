#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class CRectangle
{
	public:
		int x;
		int y;
		int area()
		{
			return x * y;
		}
};

int main1() {
	CRectangle rect;
	cout << "Enter length of rectangle: ";
	cin >> rect.x;
	cout << "Enter breadth of rectangle: ";
	cin >> rect.y;
	cout << "Area: " << rect.area();
	
	return 0;
}
