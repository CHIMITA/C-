#include <iostream>

using namespace std;

int select = 0;

class Character
{
public:
	string name[50], age[20], job[50];

	int num = 0, copy_num = 0, edit_num = 0;

	int start() {

		cout << "\n========= ĳ���� ���� =========" << endl;
		cout << "1. ĳ���� ����" << endl;
		cout << "2. ĳ���� ����" << endl;
		cout << "3. ĳ���� ���� Ȯ��" << endl;
		cout << "4. ĳ���� ���� ����" << endl;
		cout << "5. ����" << endl;
		cout << "��ȣ�� �������ּ���: ";
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
			cout << "����Ǿ����ϴ�.";
			exit(0); //error ���� ���� ���� �� 0, error ���� ���� �� 1
		}
		else {
			cout << "���� ������ �Է��ϼ���." << endl;
		}
	}

	void make() {
		cout << "\n������ ĳ������ �̸�, ����, ������ ������� �Է����ּ���. (�������� ����)" << endl;
		cout << "-->";
		cin >> name[num] >> age[num] >> job[num];
		num++;

		cout << "ĳ���Ͱ� �����Ǿ����ϴ�." << endl;
		//cout << name << age << job; Ȯ�ο�
	}

	void copy() {

		Character ch;
		Character copy_ch(ch);

		name[num] = name[copy_num];
		age[num] = age[copy_num];
		job[num] = job[copy_num];

		num++;
		copy_num++;

		cout << "ĳ���Ͱ� ����Ǿ����ϴ�." << endl;

		//cout << name << age << job; Ȯ�ο�
	}

	void check() {
		//������ ��ŭ ����ϱ� ���� for�� ���
		for (int i = 0; i < num; i++) {
			cout << "\n****** ĳ���� ���� ******" << endl;
			cout << "ĳ���� �̸� : " << name[i] << endl;
			cout << "ĳ���� ���� : " << age[i] << endl;
			cout << "ĳ���� ���� : " << job[i] << endl;
			cout << endl;
		}
	}

	void edit() {
		cout << "�����ϰ� ���� ĳ���͸� �����ϼ���~" << endl;
		cin >> num;

		cout << "���� �� �̸�, ����, ������ ������� �Է����ּ���. (�������� ����)" << endl;
		cout << "-->";
		cin >> name[num - 1] >> age[num - 1] >> job[num - 1];

		cout << "ĳ���Ͱ� ���������� �����Ǿ����ϴ�." << endl;
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
}

int main() {

	Character character;



	while (true) {
		character.start();
		character.setSelect(select);
	}

}