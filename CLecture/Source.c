#include <stdio.h>

// #define 식별자 값
#define SIZE 100

#define CALL printf("call")

void main()
{
	// 자료형 변환이란?
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때
	// 기존에 저장했던 자료형을 다른 자료형으로 변환하는 과정입니다.

	// 암묵적 형 변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형
	// 으로 변환되는 과정입니다.

	// 1. 대입 연산 시 발생하는 암묵적 형 변환
	/*
	int integer = 10;       
	float decimal = 6.5f; 
         
	float result = integer + decimal;

	printf("result 변수의 값 : %f", result);
	*/

	// 2. 대입 연산 시 발생하는 데이터 손실 과정 
	/*
	int data = 129;

	char value = data;

	printf("value의 값 : %d", value);
	*/

	// 3. 정수의 승격
	/*
	char x = 10;
	short y = 20;

	printf("x + y의 데이터 크기 : %d", sizeof(x + y));
	*/

	// 명시적 형 변환
	/*
	// 연산이 이루어지기 전에 사용자 직접 자료형을 변환하는 과정입니다.
	int health = 10;
	int armor = 3;

	float result = (float)health / armor;

	printf("result 변수의 값 : %f", result);
	*/

	// 오버플로우란?
	/*
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서
	// 연산을 수행하는 과정입니다.

	// char 값의 범위 : -128 ~ 127
	char table = 128;

	printf("table 변수의 값 : %d", table);
	*/

	// 언더플로우란?
	/*
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을
	// 수행하는 과정입니다.

	char data = -129;

	printf("data의 값 : %d", data);
	*/

	// 부호 없는 자료형
	/*
	unsigned char signal = 255;
	printf("signal 변수의 값 : %d", signal);
	*/

	// 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의되고
	// 치환되는 과정입니다.

	printf("size의 값 : %d\n", SIZE);

	CALL;
	// 매크로의 경우는 자료형이 존재하지 않므으로
	// 메모리 공간을 가지고 있지 않습니다.
	// SIZE = 300;



}