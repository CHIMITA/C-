#pragma once
#ifdef SHAPE_H
#define SHAPE_H

class shape
{
public:

	int A, B, C;

	double p = 3.14;
	double sum = 0;

	shape();

	int getA(int a);
	int getB(int b);

	void AreaOval(int a, int b);
	void setTwo(int a, int b);

};
#endif //SHAPE_H
