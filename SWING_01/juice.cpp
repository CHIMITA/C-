#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char name[10];

	int price_coke; //가격
	int price_water;
	int price_fanta;

	int am_coke; //수량
	int am_water;
	int am_fanta;

	int all; //총 값

	cout << "당신의 이름은 무엇입니까? :";
	cin.getline(name, 10, '\n'); // 공백을 포함한 문자열 입력

	cout << "반갑습니다." << name << "님.\n";

	cout << "----------SWING 30-----------\n";
	cout << "음료의 가격 입력을 시작합니다.\n\n";

	cout << "콜라의 가격 : ";
	cin >> price_coke; //가격 입력

	cout << "삼다수의 가격 : ";
	cin >> price_water;

	cout << "환타의 가격 : ";
	cin >> price_fanta;

	cout << "\n개수를 입력해주세요\n\n";

	cout << "콜라의 수량 : "; 
	cin >> am_coke; //수량 입력

	cout << "삼다수의 수량 : ";
	cin >> am_water;

	cout << "환타의 수량 : ";
	cin >> am_fanta;

	cout << "\n-------------------------\n";

	all = price_coke * am_coke + price_water * am_water + price_fanta * am_fanta; //제품의 가격과 개수를 곱하고 더함

	cout << "500원 할인 받아 총" << all - 500 <<"원 입니다." << endl; //all 값에서 500원을 빼주며 할인
}