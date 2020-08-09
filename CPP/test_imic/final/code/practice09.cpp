#include <iostream>

using namespace std;

class Shape {
   public:
      virtual float Area() = 0; 
      void setLength(float l) {
         length = l;
      }
   
   protected:
      float length;
};

class Square: public Shape {
   public:
      float Area() { 
         return (length * length); 
      }
};

class Circle: public Shape {
   public:
      float Area() { 
         return length * length * 3.14; 
      }
};

int main09() {
	float num;
  	Square S;
 	Circle C;
 	
 	cout << "Enter length to calculate the area of a square: ";
 	cin >> num;
 	
 	S.setLength(num);

  	cout << "Area of square: " << S.Area() << endl;
  	
  	cout << "Enter radius to calculate the area of a circle: ";
 	cin >> num;
 	
 	C.setLength(num);

  	cout << "Area of circle: " << C.Area() << endl;
  	
  	return 0;
}
