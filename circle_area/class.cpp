#include "C:\Users\chimita\source\repos\circle_area\circle_area\shape.h"
#include <iostream>
 
using namespace std;

shape::shape() {}



shape::getA(int a)
{
	A = a;

	return A;
}

shape::getB(int b)
{
	B = b;

	return B;
}

void shape::AreaOval(int a, int b)
{
	name = "CirecleA";
	sum = A * B * p;
	cout << "Ÿ���� ���̴� " << sum << "�̴�." << endl;
}

void shape::setTwo(int a, int b)
{
	getA(a);
	getB(b);
}

