#include <iostream>

using namespace std;

class Box { //Ŭ���� ����
private:

	int num = 0;
	int num_w = 0, num_h = 0;

	char ch = '*'; // '*'�� �ʱ�ȭ

public:
	//���� ����
	void setFil() {
		if (num >= 1)// num�� 1���� ũ�ų� ���� ��
		{
			ch = '^'; // '^'�� �ʱ�ȭ
			cout << "\n";
		}
	}
	//�簢�� ũ��
	void setsize(int w, int h) { 
		num_w = w;
		num_h = h;
	}
	//�簢�� ���
	void draw() {
		for (int i = 0; i < num_h; i++) //�Է� ���� �� ��ŭ �ݺ�, ����
		{
			for (int j = 0; j < num_w; j++) { //�Է� ���� �� ��ŭ �ݺ�, ����
				cout << ch;
			}
			cout << "\n";
		}
		num++; // Ƚ���� �����ϱ� ���� num�� 1�� ������
	}
};

int main() {
	Box box; //������ ����

	//�Լ� ȣ��
	box.setFil();
	box.setsize(3, 4);
	box.draw();

	box.setFil();
	box.setsize(6, 10);
	box.draw();

}