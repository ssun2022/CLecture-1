#include <stdio.h>

void main()
{
	// 조건문이란?
	// 어떤 조건이 주어질 때 해당 조건에 따라
	// 동작을 수행하도록 실행하는 명령문입니다.

	// 관계 연산자
	/*
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는
	// 값을 나타내는 연산자입니다.
	int num1 = 5 < 10;
	int num2 = 5 > 10;
	int num3 = 10 <= 10;
	int num4 = 5 >= 10;
	int num5 = 1 == 1;
	int num6 = 1 != 1;

	printf("num1의 값 : %d\n", num1);
	printf("num2의 값 : %d\n", num2);
	printf("num3의 값 : %d\n", num3);
	printf("num4의 값 : %d\n", num4);
	printf("num5의 값 : %d\n", num5);
	printf("num6의 값 : %d\n", num6);
	*/

	// if 문
	/*
	// 어떤 특정한 조건을 비교하여 조건이 "참"이면
	// 실행되는 명령문입니다.

	int health = 0;

	if (health <= 0)
	{
		printf("Game Over");
	}
	*/

	// else if 문
	/*
	// if 문의 조건이 틀릴 때 else if문의 조건이 맞다면 실행되는
	// 명령문입니다.
	int level = 10;

	if (level == 5)
	{
		printf("전직");
		// if 문에 연결된 모든 조건문의 조건이 맞을 때
		// 가장 위에 있는 조건문만 실행됩니다.
	}
	else if (level == 10)
	{
		printf("승급");

		if (level == 10)
		{
			printf("2차 승급");
		}
	}
	else if (level == 30)
	{
		printf("각성");
	}
	*/

	// else 문
	// if 문과 else if 문의 조건이 다 틀리면 실행되는 명령문입니다.

	int exp = 1000;

	if (exp == 250)
	{
		printf("??? 아이템 착용 가능");
	}
	else if (exp == 500)
	{
		printf("??? 아이템 구매 가능");
	}
	else
	{
		printf("??? 아이템 판매 가능");
	}


}