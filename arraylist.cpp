#include <iostream>
using namespace std;

int a, i, j; //전역 변수로 선언 
int t = 1;

int arr[4][11] = {0, 0}; // 정수형 배열의 길이 지정 및 초기화 


// 반환 값이 없는 void를 이용하여 함수 사용
void arraylist()
{
	cout << endl;

	// 1 부터 10까지 출력
	for (int num = 1; num < 11; num++)
	{
		cout << num << " ";
	}

	cout << "\n-----------------------------------------" << endl;

	// 2차원 배열 출력 
	for (i = 1; i < 4; i++) // 행 1 부터 4 미만까지, 즉 3의 크기(길이)
	{
		for (j = 1; j < 11; j++) //열 1 부터 11 미만까지, 즉 10의 크기(길이)
		{
			cout << arr[i][j] << " "; 

		}
		cout << endl;

	}
}

int main() {

	//좌석 예약하시겠습니까? (0 이나 1 선택)를 반복 출력하기 위해, while문 사용

	while (true)
	{
		cout << "좌석 예약하시겠습니까? (0 이나 1 선택) ";
		cin >> a;

		if(a == 1) 
		{
			cout << endl;

			arraylist(); // 위에 선언한 함수 호출

			cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? : ";
			cin >> i >> j;

			//예약된 자리인지 확인
			if (arr[i][j] == 0)  // arr[i][j] 위치에 값이 0 이면 아직 예약이 안된 것이기 때문에, 아래 코드 실행
			{
				arr[i][j] = 1; // arr[i][j] 위치에 1로 초기화
				cout << "예약되었습니다." << endl;
				arraylist();
				
			}
			else // arr[i][j] 위치에 값이 0 이 아니면 실행
			{
				cout << "이미 예약된 좌석입니다." << endl;
			}
		}
		else
		{
			cout << "\n좌석 예약 종료";
			break; // while 문의 반복을 종료
		}
	}
	
}




