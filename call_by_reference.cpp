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

	cout << "�⺻ �� ----" << endl;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(a, b);

	cout << "����� �� ----" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
}