#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int num;
int status = 0; //로그인 상태 변수 0 : 로그아웃 1: 로그인

char name[20];
char id[20];
char pwd[30];

char id_add[20];
char pwd_add[30];

const char* id_login = id_add; //상수로 값 고정
const char* pwd_login = pwd_add;




class Member {
public:

    int start() { //시작 부분

        cout << "\n--------서울여대 종합정보시스템--------" << endl;
        cout << "1. 회원가입" << endl;
        cout << "2. 로그인" << endl;

        cout << "\n번호를 입력하세요 >> ";
        cin >> num;
        cout << "----------------------------------------" << endl;

        return num;
    }

    void setName() {
        cout << "\n이름 : ";
        cin >> name;
    }

    void setId() {
        cout << "아이디 : ";
        cin >> id_add; 
    }

    void setPassword() {
        cout << "비밀번호 : ";
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

        cout << "\n=== 회원가입 성공 ===" << endl;
    }

    void login() { 
        
        cout << "\n아이디 : ";
        cin >> id;

        cout << "비밀번호 : ";
        cin >> pwd;


        if (strcmp(id, id_login) == 0 && strcmp(pwd, pwd_login) == 0) { //문자열 같은 지 확인
            status = 1;
            cout << "\n=== 로그인 성공 ===\n" << endl;
            cout << getName() << "님 환영합니다." << endl;
            
        }
        else {
            status = 0;
            cout << "아이디 혹은 비밀번호가 틀렸습니다." << endl;
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
            cout << "1 또는 2만 입력해주세요" << endl;
        }
    }

};

class Cart {
public:

    int i = 0;
    int myclassNum;

    string class_num;
    string class_list[3] = { "c++ 프로그래밍", "linux 프로그래밍", "리버싱" };
    string class_numlist[3] = { "0001", "0002", "0003" };

    string *myClass = new string[3];

    int mainStart() {
        cout << "====================" << endl;
        cout << "1. 장바구니" << endl;
        cout << "2. 강의 담기" << endl;
        cout << "3. 수강신청 확인" << endl;
        cout << "4. 로그아웃" << endl;

        cout << "번호를 입력하세요 : ";
        cin >> num;

        return num;
    }



    void print() {
        //배열로 강의 목록 출력
        cout << "============강의목록==============" << endl;
        cout << "[1] " << class_list[0] << " >> " << class_numlist[0] << endl;
        cout << "[2] " << class_list[1] << " >> " << class_numlist[1] << endl;
        cout << "[3] " << class_list[2] << " >> " << class_numlist[2] << endl;

    }
    /*
    void class_check(int num) {
       myClass[i] =
    }
    */

    //2. 강의 담기
    void bag_course() {
        cout << "\n추가할 학수 번호 >> ";
        cin >> class_num;

        if (class_num.compare(class_numlist[0]) == 0) { //입력한 학수번호가 저장된 학수번호와 같을 때
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
            if (&myClass[i] != &class_list[myclassNum])// 입력한 학수 번호가 미리 저장된 학수번호에 없을 때
            {
                if (&myClass[myclassNum] != &class_list[i])
                {
                    myClass[i] = class_list[myclassNum]; //myClass에 class_list[i] 저장
                    i++;
                    break;
                }
                
            }
            if (&myClass[i] == &class_list[myclassNum]) { //저장된 과목명과 입력받은 과목 비교
                if (&myClass[i] == &class_list[i])
                {
                    cout << "이미 My 장바구니에 담겨져 있습니다." << endl;
                } 
            }
            else {
                break;

            }
        }
        
       
    }

    //3. 수강신청 확인
    void put_bag() {
        cout << "==========My 장바구니==========" << endl;

        cout << "1. " << myClass[0] << endl;
        cout << "2. " << myClass[1] << endl;
        cout << "3. " << myClass[2] << endl;

    }

    //4. 로그아웃 
    void logout() {
        cout << "로그아웃 되었습니다. 안녕히 가세요." << endl;
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
            cout << "범위 내에서 입력하세요." << endl;
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
