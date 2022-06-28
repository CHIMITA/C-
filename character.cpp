#include <iostream>

using namespace std;


int select = 0;

class Character
{
public:
	string name[50], age[20], job[50];

	int num = 0, copy_num = 0;
	

	int start() {

		cout << "========= 캐릭터 관리 =========" << endl;
		cout << "1. 캐릭터 생성" << endl;
		cout << "2. 캐릭터 복사" << endl;
		cout << "3. 캐릭터 정보 확인" << endl;
		cout << "4. 캐릭터 정보 수정" << endl;
		cout << "5. 종료" << endl;
		cout << "번호를 선택해주세요: ";
		cin >> select;
		cout << endl;

		return select;
	}

	void setSelect(int select) {
		if (select == 1) {
			make();
		}
		else if (select == 2) {
			copy();
		}
		else if (select == 3) {
			check();
		}
		else if (select == 4) {
			edit();
			
		}
		else if (select == 5) {
			cout << "종료되었습니다.";
			exit;
		}
		else {
			cout << "범위 내에서 입력하세요." << endl;
		}
	}

	void make() {
		cout << "생성할 캐릭터의 이름, 나이, 직업을 순서대로 입력해주세요. (공백으로 구분)" << endl;
		cout << "-->";
		cin >> name[num] >> age[num] >> job[num];
		num++;

		cout << "캐릭터가 생성되었습니다." << endl;
		//cout << name << age << job; 확인용
	}

	void copy() {
		Character ch;
		Character copy_ch(ch);

		name[num] = name[copy_num];
		age[num] = age[copy_num];
		job[num] = job[copy_num];

		num++;

		cout << name << age << job;
	}

	void check() {
		for (int i = 0; i < num; i++) {
			cout << "****** 캐릭터 정보 ******" << endl;
			cout << "캐릭터 이름 : " << name[i] << endl;
			cout << "캐릭터 나이 : " << age[i] << endl;
			cout << "캐릭터 직업 : " << job[i] << endl;
			cout << endl;
		}
	}

	void edit() {
		cout << "수정하고 싶은 캐릭터를 선택하세요~" << endl;

		cout << "수정 할 이름, 나이, 직업을 순서대로 입력해주세요. (공백으로 구분)" << endl;
		cout << "-->";
		cin >> name[num -1] >> age[num -1] >> job[num -1];

		cout << "캐릭터가 생성되었습니다." << endl;
	}


	Character() {}
	Character(const Character& character);
	~Character();


};

Character::Character(const Character& copy)
{
	
}

Character::~Character()
{
	cout << "소멸자 실행" << endl;

}

int main() {
	
	Character character;
	Character* c;

	c = &character;

	while (true) {
		c->start();
		c->setSelect(select);
	}
	


}