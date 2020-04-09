#include <iostream>

class Point3d
{
private:
	int m_x, m_y, m_z;
public:
	void setValues(int x, int y, int z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}

	void print()
	{
		std::cout << '<' << m_x << ", " << m_y << ", " << m_z << '>'; 
	}
	bool isEqual(const Point3d &p)
	{
		return (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z);
	}
};

int main()
{
	Point3d point;
	point.setValues(1,3,3);

	Point3d point2;
	point2.setValues(1,3,3);

	Point3d point3;
	point3.setValues(3,4,5);

	if (point.isEqual(point2))
		std::cout << "point va point2 is equal";
	else
		std::cout << "point vs point2 are not equal";

	point.print();

	return 0;
}