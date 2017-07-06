#include<iostream>

using namespace std;

const float pi = 3.141593;
const float fence_price = 35;
const float concrete_price = 20;

class Circle
{
public:
	Circle(float r);
	float corcumference();
	float area();
private:
	float radius;
};

Circle::Circle(float r)
{
	radius = r;
}

float Circle::corcumference()
{
	return 2 * pi*radius;
}

float Circle::area()
{
	return pi*radius*radius;
}

int main()
{
	float radius;
	cout << "Enter the radius of the pool: ";
	cin >> radius;
	Circle pool(radius);
	Circle poolRim(radius + 3);

	float fencecost = poolRim.corcumference()*fence_price;
	cout << "Fencing Cost is $" << fencecost << endl;

	float concretecost = (poolRim.area() - pool.area())*concrete_price;
	cout << "Concrete Cost is $" << concretecost << endl;

	system("pause");
	return 0;

}