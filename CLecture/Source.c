#include <stdio.h>

void main()
{
	// 포인터란?
	// 메모리의 주솟값을 저장할 수 있는 변수입니다.

	// 기초 포인터
	/*
	int data = 100;
	int count = 5;

	int * ptr = &data;

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수
	// 의 시작 주소를 가리키게 됩니다.
	printf("data의 주소 : %p\n", &data);

	printf("ptr의 값 : %p\n", ptr);
	printf("ptr의 주소 : %p\n", &ptr);

	ptr = &count;

	printf("count의 주소 : %p\n", &count);

	printf("ptr의 값 : %p\n", ptr);
	*/

	// 포인터가 가리키는 자료형
	/*
	char alphabet = 'A';
	int value = 10;
	double decimal = 7.5;

	// 포인터 변수는 가리키는 메모리 공간의 자료형을 알 수 없으므로
	// 포인터가 가리키는 메모리의 자료형을 정확하게 선언해주어야 합니다.
	char * cPtr = &value;
	int * iPtr = &decimal;
	double * dPtr = &alphabet;
	
	printf("cPtr이 가리키는 메모리의 값 : %c\n", *cPtr);
	printf("iPtr이 가리키는 메모리의 값 : %d\n", *iPtr);
	printf("dPtr이 가리키는 메모리의 값 : %lf\n", *dPtr);
	*/

	// 포인터 변수의 크기
	/*
	char character = 'X';

	char * charPtr = &character;

	printf("charPtr이 가리키는 메모리의 값 : %c\n", *charPtr);

	*charPtr = 'E';

	printf("charPtr이 가리키는 메모리의 값 : %c\n", *charPtr);

	// 포인터 변수의 크기는 CPU가 한 번에 처리할 수 있는 크기로 정해지며,
	// 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.
	printf("charPtr의 크기 : %d", sizeof(charPtr));
	*/

	// 상수 지시 포인터
	/*
	int x = 20;
	int y = 30;
	                  
	const int * ptr = &x; // [x의 시작주소]----->[x] 

	x = 300;

	// 포인터 변수를 상수로 선언하여, 포인터 변수가 가리키고 있는 주소에
	// 존재하는 값을 변경할 수 없도록 설정합니다.
	// *ptr = 300;

	ptr = &y;
	y = 1000;
	*/

	// 포인터 상수
	int monster1 = 10;
	int monster2 = 20;

	// [monster1의 시작주소] ------> monster1
	int * const ptr = &monster1;

	*ptr = 50;

	monster1 = 300;

	// ptr = &monster2;
}