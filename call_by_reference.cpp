//call_by_reference

#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
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