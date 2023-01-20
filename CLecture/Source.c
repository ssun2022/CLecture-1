#include <stdio.h>
#include <windows.h>
#include <time.h>

void main()
{
	// 랜덤 함수
	/*
	// rand : 0 ~ 32767 사이의 난수 값을 반환합니다.
	
	// rand() 함수는 프로그램이 생성될 때 값이 정해지기 
	// 때문에 프로그램을 여러 번 실행시켜도 동일한 값이 나타납니다.

	// srand() 함수는 rand() 함수에 사용되는 수를 초기화하는 함수입니다.
	// 매개변수에 seed값을 이용하여 랜덤한 값을 생성합니다.
	srand(time(NULL));

	// time() 함수는 UCT 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된
	// 시간을 초(sec)로 반환하는 함수

	for(int i = 0; i < 10; i++)
	{
		// 0 ~ 9 사이의 값만 나오도록 해볼게요.
		printf("랜덤한 값 : %d\n", rand() % 10 + 1);
	}
	*/

	// 표준 입력 함수
	/*
	// 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수입니다.
	
	int value = 0;

	scanf_s("%d", &value);

	printf("value 값 : %d", value);
    */

	// UP-DOWN 게임
	/*
	int life = 5;
	
	srand(time(NULL));

	int computer = rand() % 50 + 1;
	int answer = 0;

	while (life > 0) 
	{
		printf("컴퓨터가 가지고 있는 값 : ");
		scanf_s("%d", &answer);

		if (answer > computer)
		{
			printf("컴퓨터가 가지고 있는 수 보다 큽니다.\n");
			life--;
		}
		else if (answer < computer)
		{
			printf("컴퓨터가 가지고 있는 수 보다 작습니다.\n");
			life--;
		}
		else if (answer == computer)
		{
			printf("컴퓨터가 가지고 있는 수를 알아냈습니다.");
			break;
		}
	}

	if (life == 0)
	{
		printf("컴퓨터가 가지고 있는 수를 알아내지 못했습니다.\n");
		printf("컴퓨터가 가지고 있던 값 : %d", computer);
	}
	*/

	// 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	int data = 10;
	// 변수의 메모리 프로그램이 실행될 때마다 계속 바뀝니다.

	// %p : 메모리 주소를 확인하는 서식 지정자
	printf("data 변수의 주소 : %p", &data);


}