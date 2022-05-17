#include <iostream>

using namespace std;

class Shape {
private:
	string name;

	int A, B, C; //����1, ����(����), ����2(�غ�)
	
	double p = 3.14;
	double sum = 0;

public:
	Shape() {
		//�ʱ�ȭ ���� ���� ��� ���� �ʱ�ȭ
		A = 0;
		B = 0;
		C = 0;
	} 
	Shape(int a, int b) { 
		getA(a); // ���� �ʱ�ȭ ���� getA,getB �Լ� �ҷ���
		getB(b); // ���� �ҷ����� �ʾƵ� ���� ����� ����
	}

	Shape(int a, int b, int c) {
		getA(a);
		getB(b);
		getC(c);
	}

	~Shape() {
		cout << "Shqpe �Ҹ� " << name << "Ŭ����" << endl;
	}

	int getA(int a) { //a ���� A�� ���� �� ��ȯ
		A = a;

		return A;
	}

	int getB(int b) { //b ���� B�� ���� �� ��ȯ
		B = b;

		return B;
	}

	int getC(int c) { //c ���� C�� ���� �� ��ȯ
		C = c;

		return C;
	}

	void AreaOval() { //Ÿ���� ���� ������ִ� �Լ�
		name = "CirecleA";
		sum = A * B * p;
		cout << "Ÿ���� ���̴� " << sum << "�̴�." << endl;
	};

	void AreaLadder() { //��ٸ��� ���� ������ִ� �Լ�
		name = "Ladder";
		sum = (A + B) * C / 2;
		cout << "��ٸ����� ���̴� " << sum << "�̴�." << endl;
	}

	void AreaRect() { //�簢���� ���� ������ִ� �Լ�
		name = "Rectangular";
		sum = A * B;
		cout << "�簢���� ���̴� " << sum << "�̴�." << endl;
	}

	void setTwo(int a, int b) { //Ÿ���� A,B�� �簢���� A,B �������ִ� �Լ�
		getA(a);
		getB(b);
	}

	void setThree(int a, int b, int c) { //��ٸ����� A, B, C ���� �������ִ� �Լ�
		getA(a);
		getB(b);
		getC(c);
	}
};

int main() {
	
	//��ü ����
	Shape a;
	Shape b(10, 20);
	Shape c(3, 7, 4);

	a.setTwo(5, 1);
	a.AreaOval();

	b.AreaRect();

	c.AreaLadder();
	c.setThree(5, 10, 6);
	c.AreaLadder();
}