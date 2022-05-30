#include <iostream>

using namespace std;

class Box { //클래스 생성
private:

	int num = 0;
	int num_w = 0, num_h = 0;

	char ch = '*'; // '*'로 초기화

public:
	//문자 세팅
	void setFil() {
		if (num >= 1)// num이 1보다 크거나 같을 때
		{
			ch = '^'; // '^'로 초기화
			cout << "\n";
		}
	}
	//사각형 크기
	void setsize(int w, int h) { 
		num_w = w;
		num_h = h;
	}
	//사각형 출력
	void draw() {
		for (int i = 0; i < num_h; i++) //입력 받은 수 만큼 반복, 세로
		{
			for (int j = 0; j < num_w; j++) { //입력 받은 수 만큼 반복, 가로
				cout << ch;
			}
			cout << "\n";
		}
		num++; // 횟수를 구분하기 위해 num을 1씩 더해줌
	}
};

int main() {
	Box box; //생성자 생성

	//함수 호출
	box.setFil();
	box.setsize(3, 4);
	box.draw();

	box.setFil();
	box.setsize(6, 10);
	box.draw();

}