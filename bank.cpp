#include <iostream>

using namespace std;

//���������� ����

int total_;
int total_money;

int bank[4] = { 5000, 4000, 0, 10 };

string bank_name[4] = { "�ϳ�", "�츮", "����", "����" };

void myaccounts(string* bank_name, int* bank) { // �����ͷ� �����Ͽ� �迭�� �ּҰ��� �޾ƿ´�.
	cout << "----------���ະ ���� ����----------" << endl;

	//��, �ϳ�, �츮, ����, ����
	//    5000, 4000,   0,     10 �� ���̴�.
	cout << "|    " << bank_name[0] << "    |    " << bank_name[1] << "    |  " << bank_name[2] << "  |  " << bank_name[3] << "  |" << endl;
	cout << "|    " << bank[0] << "    |    " << bank[1] << "    |    " << bank[2] << "   |  " << bank[3] << "    |    " << endl;
	cout << "-----------------------------------------" << endl;
}

int total(int* bank) { // �����ͷ� �����Ͽ� �迭�� �ּ� ���� �޾ƿ´�.
	total_ = bank[0] + bank[1] + bank[2] + bank[3]; // ��, 5000 + 4000 + 0 + 10 �� ���̴�.
	return total_; //total_ ���� ��ȯ
}

int main() {
	total_money = total(bank); // ���������� ������ bank�� ���� ���� ������ �־���

	cout << "************SWING �ڻ���� ����**********" << endl;
	
	myaccounts(bank_name, bank); // ���������� ������ bank_name, bank�� ���� ���� ������ �־���

	cout <<"���� SWING �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ���" << total_money << "�� �Դϴ�." << endl;
	cout << "**********************************************";


}
