// call_by_value

#include <iostream>

using namespace std;

void swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "±âº» °ª ----" << endl;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(a, b);

	cout << "º¯°æµÈ °ª ----" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
}
