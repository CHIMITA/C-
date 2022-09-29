#include <iostream> 
// #include 는 전처리기에 지시하는 역할을 가지며 뒤에 오는 <>, "" 에 따라 헤더파일을 읽어온다.
//<iostream> 은 입출력을 위해 클래스와 객체가 선언되어 있기 때문에, 입출력이 필요한 코드를 작성할 때 필요하다.
using namespace std; 
// namespace 에 속한 이름인 클래스(std)를 모두 가져와 사용할 수 있게한다. ex. cout, cin, endl 등 

int main() { 
	// main(){} : 프로그램을 실행 시키는 시작점이며, main() 함수 속 모든 내용이 실행되면 프로그램 종료한다. 이는 프로그램을 작성할 때 하나씩 꼭 필요한 요소이다.

	char name[10];
	//char 변수는 1 byte 정수형이다. 자료형이 정수이더라도 다른 방식으로 사용되며, 정수로 해석하는 대신 ASCII code 문자로 해석된다.
	
	//가격
	//먼저, 변수는 데이터를 저장하기 할당받은 메모리 공간을 의미한다. 
	int price_coke;  //int 변수는 4 byte 정수형이다.약 42억개의 정수를 표현할 수 있다.
	int price_water;
	int price_fanta;

	//수량
	int am_coke; //변수 선언
	int am_water;
	int am_fanta;

	//총 값
	int all; 

	cout << "당신의 이름은 무엇입니까? :"; 
	//cout은 다양한 데이터 형을 서식문자 없이 자동으로 출력한다. 
	//<< 연산자는 왼쪽 시프트 연산자이고 삽입 연산자라고 부른다.

	cin.getline(name, 10, '\n');
	//cin은 입력을 받는 함수이며, 출력과 반대인 오른쪽 시프트 연산자이고, 추출 연산자라고 부른다.
	// getline() : 공백을 포함해 문자열 입력을 할 수 있다.

	cout << "반갑습니다." << name << "님.\n";//\n : 줄바꿈

	cout << "----------SWING 30-----------\n";
	cout << "음료의 가격 입력을 시작합니다.\n\n";

	//가격 입력
	cout << "콜라의 가격 : ";
	cin >> price_coke; 

	cout << "삼다수의 가격 : ";
	cin >> price_water;

	cout << "환타의 가격 : ";
	cin >> price_fanta;

	cout << "\n개수를 입력해주세요\n\n";

	//수량 입력
	cout << "콜라의 수량 : "; 
	cin >> am_coke; 

	cout << "삼다수의 수량 : ";
	cin >> am_water;

	cout << "환타의 수량 : ";
	cin >> am_fanta;

	cout << "\n-------------------------\n";

	//제품의 가격과 개수를 곱하고 더한다.
	all = price_coke * am_coke + price_water * am_water + price_fanta * am_fanta; 

	cout << "500원 할인 받아 총" << all - 500 <<"원 입니다." << endl; 
	//all 값에서 500원을 빼주며 할인한다.
	//endl : 줄바꿈 역할과 출력함수의 끝을 알림으로써 버퍼를 정리하는 기능을 가진다.
}
