#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char name[10];

	int price_coke; //����
	int price_water;
	int price_fanta;

	int am_coke; //����
	int am_water;
	int am_fanta;

	int all; //�� ��

	cout << "����� �̸��� �����Դϱ�? :";
	cin.getline(name, 10, '\n'); // ������ ������ ���ڿ� �Է�

	cout << "�ݰ����ϴ�." << name << "��.\n";

	cout << "----------SWING 30-----------\n";
	cout << "������ ���� �Է��� �����մϴ�.\n\n";

	cout << "�ݶ��� ���� : ";
	cin >> price_coke; //���� �Է�

	cout << "��ټ��� ���� : ";
	cin >> price_water;

	cout << "ȯŸ�� ���� : ";
	cin >> price_fanta;

	cout << "\n������ �Է����ּ���\n\n";

	cout << "�ݶ��� ���� : "; 
	cin >> am_coke; //���� �Է�

	cout << "��ټ��� ���� : ";
	cin >> am_water;

	cout << "ȯŸ�� ���� : ";
	cin >> am_fanta;

	cout << "\n-------------------------\n";

	all = price_coke * am_coke + price_water * am_water + price_fanta * am_fanta; //��ǰ�� ���ݰ� ������ ���ϰ� ����

	cout << "500�� ���� �޾� ��" << all - 500 <<"�� �Դϴ�." << endl; //all ������ 500���� ���ָ� ����
}