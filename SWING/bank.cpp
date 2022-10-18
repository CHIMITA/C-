#include <iostream>

using namespace std;

//전역변수로 선언

int total_;
int total_money;

int bank[4] = { 5000, 4000, 0, 10 };

string bank_name[4] = { "하나", "우리", "신한", "국민" };

void myaccounts(string* bank_name, int* bank) { // 포인터로 지정하여 배열의 주소값을 받아온다.
	cout << "----------은행별 계좌 정보----------" << endl;

	//즉, 하나, 우리, 신한, 국민
	//    5000, 4000,   0,     10 인 것이다.
	cout << "|    " << bank_name[0] << "    |    " << bank_name[1] << "    |  " << bank_name[2] << "  |  " << bank_name[3] << "  |" << endl;
	cout << "|    " << bank[0] << "    |    " << bank[1] << "    |    " << bank[2] << "   |  " << bank[3] << "    |    " << endl;
	cout << "-----------------------------------------" << endl;
}

int total(int* bank) { // 포인터로 지정하여 배열의 주소 값을 받아온다.
	total_ = bank[0] + bank[1] + bank[2] + bank[3]; // 즉, 5000 + 4000 + 0 + 10 인 것이다.
	return total_; //total_ 값을 반환
}

int main() {
	total_money = total(bank); // 전역변수로 선언한 bank의 값을 인자 값으로 넣어줌

	cout << "************SWING 자산관리 서비스**********" << endl;
	
	myaccounts(bank_name, bank); // 전역변수로 선언한 bank_name, bank의 값을 인자 값으로 넣어줌

	cout <<"현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은" << total_money << "원 입니다." << endl;
	cout << "**********************************************";


}
