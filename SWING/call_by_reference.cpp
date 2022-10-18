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

	cout << "±âº» °ª ----" << endl;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(a, b);

	cout << "º¯°æµÈ °ª ----" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
}
