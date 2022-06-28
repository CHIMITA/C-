#include <iostream>

using namespace std;

class Shape {
private:
	string name;

	int A, B, C; //가로1, 세로(높이), 가로2(밑변)
	
	double p = 3.14;
	double sum = 0;

public:
	Shape() {
		//초기화 경고로 인해 멤버 변수 초기화
		A = 0;
		B = 0;
		C = 0;
	} 
	Shape(int a, int b) { 
		getA(a); // 변수 초기화 경고로 getA,getB 함수 불러옴
		getB(b); // 굳이 불러오지 않아도 값은 제대로 나옴
	}

	Shape(int a, int b, int c) {
		getA(a);
		getB(b);
		getC(c);
	}

	~Shape() {
		cout << "Shqpe 소멸 " << name << "클래스" << endl;
	}

	int getA(int a) { //a 값을 A에 넣은 후 반환
		A = a;

		return A;
	}

	int getB(int b) { //b 값을 B에 넣은 후 반환
		B = b;

		return B;
	}

	int getC(int c) { //c 값을 C에 넣은 후 반환
		C = c;

		return C;
	}

	void AreaOval() { //타원의 넓이 출력해주는 함수
		name = "CirecleA";
		sum = A * B * p;
		cout << "타원의 넓이는 " << sum << "이다." << endl;
	};

	void AreaLadder() { //사다리꼴 넓이 출력해주는 함수
		name = "Ladder";
		sum = (A + B) * C / 2;
		cout << "사다리꼴의 넓이는 " << sum << "이다." << endl;
	}

	void AreaRect() { //사각형의 넓이 출력해주는 함수
		name = "Rectangular";
		sum = A * B;
		cout << "사각형의 넓이는 " << sum << "이다." << endl;
	}

	void setTwo(int a, int b) { //타원의 A,B나 사각형의 A,B 설정해주는 함수
		getA(a);
		getB(b);
	}

	void setThree(int a, int b, int c) { //사다리꼴의 A, B, C 길이 설정해주는 함수
		getA(a);
		getB(b);
		getC(c);
	}
};

int main() {
	
	//객체 생성
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