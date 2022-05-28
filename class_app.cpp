#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int num;
int status = 0; //�α��� ���� ���� 0 : �α׾ƿ� 1: �α���

char name[20];
char id[20];
char pwd[30];

char id_add[20];
char pwd_add[30];

const char* id_login = id_add; //����� �� ����
const char* pwd_login = pwd_add;




class Member {
public:

    int start() { //���� �κ�

        cout << "\n--------���￩�� ���������ý���--------" << endl;
        cout << "1. ȸ������" << endl;
        cout << "2. �α���" << endl;

        cout << "\n��ȣ�� �Է��ϼ��� >> ";
        cin >> num;
        cout << "----------------------------------------" << endl;

        return num;
    }

    void setName() {
        cout << "\n�̸� : ";
        cin >> name;
    }

    void setId() {
        cout << "���̵� : ";
        cin >> id_add; 
    }

    void setPassword() {
        cout << "��й�ȣ : ";
        cin >> pwd_add;
    }

    string getName() {
        return name;
    }

    string getId() {
        return id;
    }

    string getPassword() {
        return pwd;
    }

 
    void addUser() {
        setName();
        setId();
        setPassword();

        cout << "\n=== ȸ������ ���� ===" << endl;
    }

    void login() { 
        
        cout << "\n���̵� : ";
        cin >> id;

        cout << "��й�ȣ : ";
        cin >> pwd;


        if (strcmp(id, id_login) == 0 && strcmp(pwd, pwd_login) == 0) { //���ڿ� ���� �� Ȯ��
            status = 1;
            cout << "\n=== �α��� ���� ===\n" << endl;
            cout << getName() << "�� ȯ���մϴ�." << endl;
            
        }
        else {
            status = 0;
            cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl;
        }

    }

    void setNum(int num) {
        if (num == 1) {
            addUser();
        }
        else if (num == 2) {
            login();
        }
        else {
            cout << "1 �Ǵ� 2�� �Է����ּ���" << endl;
        }
    }

};

class Cart {
public:

    int i = 0;
    int myclassNum;

    string class_num;
    string class_list[3] = { "c++ ���α׷���", "linux ���α׷���", "������" };
    string class_numlist[3] = { "0001", "0002", "0003" };

    string *myClass = new string[3];

    int mainStart() {
        cout << "====================" << endl;
        cout << "1. ��ٱ���" << endl;
        cout << "2. ���� ���" << endl;
        cout << "3. ������û Ȯ��" << endl;
        cout << "4. �α׾ƿ�" << endl;

        cout << "��ȣ�� �Է��ϼ��� : ";
        cin >> num;

        return num;
    }



    void print() {
        //�迭�� ���� ��� ���
        cout << "============���Ǹ��==============" << endl;
        cout << "[1] " << class_list[0] << " >> " << class_numlist[0] << endl;
        cout << "[2] " << class_list[1] << " >> " << class_numlist[1] << endl;
        cout << "[3] " << class_list[2] << " >> " << class_numlist[2] << endl;

    }
    /*
    void class_check(int num) {
       myClass[i] =
    }
    */

    //2. ���� ���
    void bag_course() {
        cout << "\n�߰��� �м� ��ȣ >> ";
        cin >> class_num;

        if (class_num.compare(class_numlist[0]) == 0) { //�Է��� �м���ȣ�� ����� �м���ȣ�� ���� ��
            myclassNum = 0;

        }
        else if (class_num.compare(class_numlist[1]) == 0) {
            myclassNum = 1;

        }
        else if (class_num.compare(class_numlist[2]) == 0) {
            myclassNum = 2;

        }
        // 0 , 0  1, 
        for (int i = 0; i < 3; i++)
        {
            if (&myClass[i] != &class_list[myclassNum])// �Է��� �м� ��ȣ�� �̸� ����� �м���ȣ�� ���� ��
            {
                if (&myClass[myclassNum] != &class_list[i])
                {
                    myClass[i] = class_list[myclassNum]; //myClass�� class_list[i] ����
                    i++;
                    break;
                }
                
            }
            if (&myClass[i] == &class_list[myclassNum]) { //����� ������ �Է¹��� ���� ��
                if (&myClass[i] == &class_list[i])
                {
                    cout << "�̹� My ��ٱ��Ͽ� ����� �ֽ��ϴ�." << endl;
                } 
            }
            else {
                break;

            }
        }
        
       
    }

    //3. ������û Ȯ��
    void put_bag() {
        cout << "==========My ��ٱ���==========" << endl;

        cout << "1. " << myClass[0] << endl;
        cout << "2. " << myClass[1] << endl;
        cout << "3. " << myClass[2] << endl;

    }

    //4. �α׾ƿ� 
    void logout() {
        cout << "�α׾ƿ� �Ǿ����ϴ�. �ȳ��� ������." << endl;
        status = 0;
    }

    void setNum(int num) {


        if (num == 1) {
            print();
        }
        else if (num == 2) {
            bag_course();
        }
        else if (num == 3) {
            put_bag();
        }
        else if (num == 4) {
            logout();
            exit;
        }
        else {
            cout << "���� ������ �Է��ϼ���." << endl;
        }
    }
};

int main() {
    Member member;
    Member* m;
    m = &member;

    Cart cart;
    Cart* c;
    c = &cart;


    while (status == 0) {
        m->start();
        m->setNum(num);
        
        continue;
    }
    while (status == 1) {

        c->mainStart();
        c->setNum(num);

    }

}
