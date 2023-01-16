#include <stdio.h>

void main()
{
	char character = 'A';
	int integer = 100;
	float decimal = 37.5;

	// 표준 출력 함수는 문자열 형태로 
	// 값을 반환합니다.

	// 표준 출력 함수에 변수를 사용하려면
	// 서식이라는 특수한 문자를 받도록 해야합니다.

	// %c = 문자
	// %d = 정수
	// %f = 실수
	// %s = 문자열
	// %p = 주솟값
	//printf("%c\n", character);
	//printf("%d\n", integer);
	//printf("%f\n", decimal);

	// 표준 출력 함수는 여러 개의 서식을 넣을 수 있으며,
	// 서식 지정자의 순서는 왼쪽에서부터 시작합니다.
	//printf("문자 값 : %c 정수 값 : %d\n", character, integer);

	// 서식과 변수의 형태 일치하지 않으면 원하는 값을 출력할 수 없습니다.
	//printf("실수 값 : %c", decimal);

	float pi = 3.1415926535;

	printf("pi의 값 : %f", pi);

}