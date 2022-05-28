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

	cout << "기본 값 ----" << endl;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(a, b);

	cout << "변경된 값 ----" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
}