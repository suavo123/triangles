#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	double base, height;
	double triPerimeter(double base, double height);
	double triArea(double base, double height);
	cout << "Enter base length of traingle: ";
	cin >> base;
	cout << "Enter height of triangle: ";
	cin >> height;
	cout << "\nThe area of the triangle is: " << triArea(base, height) << endl;
	cout << "The perimeter of the triangle is: " << triPerimeter(base) << '\n';
}
double triArea(double base, double height)
{
	double area;
	area = .5 * base * height;
	return area;
}
double triPerimeter(double base, double height)
{
	double perimeter;
	perimeter = base + height + sqrt(pow(base, 2) + pow(height, 2));
	return perimeter;
}