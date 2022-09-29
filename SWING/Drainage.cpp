#include <iostream>
#include<cstdlib> //rand(), srand() 함수
#include <ctime> //time 함수 

using namespace std;

int i, j, d;
int num = 0;
//rand : 랜덤한 수 출력
//       C++에 내장되어 있는 난수표에서 추출해오는 것이기 때문에 항상 동일한 수를 출력
int ran = rand() % 101;

int main()
{
    //srand(seed) : 프로그램을 실행 할 때 마다 다른 수를 출력하기 위해 사용
    //              seed 값을 변경해, 난수표를 변경해주어야 함
    srand(time(NULL)); // 계속 달라지는 값은 시간이므로, time을 사용 
    cout << "랜덤한 수: " << ran << endl;

    cout << "특정배수 개수 :";
    cin >> num;

    cout << "<특정배수만 출력하는 프로그램>";

    //입력 받은 개수만큼 반복
    for (i = 0; i < num; i++) {
        //특정 배수 입력
        cout << endl;
        cout << i << "번째 특정 배수 :";
        cin >> d;

        cout << "<특정배수만 출력하는 프로그램>" << endl;

        //j가 ran보다 작거나 같을 때 아래의 if문 실행을 반복 -> 출력 범위 지정  
        for (j = 1; j <= ran; j++) {
            if (j % d == 0) { //j를 d로 나누었을 때 나머지가 0인 경우 실행
                cout << j << ',';
            }
            else { // 위 조건이 아닌 경우 실행 
                continue; //if문 종료 후, 현재 for문 탈출
            }
        }

        cout << "\n<특정배수 제외 출력하는 프로그램>" << endl;

        //j가 ran보다 작거나 같을 때 아래의 if문 실행을 반복 -> 출력 범위 지정  
        for (j = 1; j <= ran; j++) {
            if (j % d != 0) { //j를 d로 나누었을 때 나머지가 0이 아닐 경우 실행 
                cout << j << ',';
            }
            else { // 위 조건이 아닌 경우 실행 
                continue; //if문 종료 후, 현재 for문 탈출
            }
        }
    }
}



