#include <stdio.h>

void main()
{
	// 배열이란?
	/*
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.
	
	//   4     4     4  = 12 byte
	//   0	   1     2
	// [100] [200] [300]
	int room[3];

	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.
	room[0] = 100;
	room[1] = 200;
	room[2] = 300;

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리
	// 공간을 가지게 됩니다.

	for (int i = 0; i < 3; i++)
	{
		printf("room[%d]의 값 : %d\n", i, room[i]);
	}
	*/

	// 배열 초기화
	/*
	// [0] = 1.5f , [1] = 2.5f ~ 
	float space[5] = { 1.5f, 2.5f, 3.5f, 4.5f, 5.5f };

	for (int i = 0; i < 5; i++)
	{
		printf("space[%d]의 값 : %f\n", i, space[i]);
	}

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서 설정한
	// 인덱스에 따라 배열의 크기가 결정됩니다.
	int dataTable[ ] = {10, 20, 30};

	for (int i = 0; i < 3; i++)
	{
		printf("dataTable[%d]의 값 : %d\n", i, dataTable[i]);
	}
	*/

	// 배열의 주소
	/*
	int value[3] = { 5,10,15 };

	printf("value 배열의 주소 : %p\n", value);
	printf("value[0]의 주소 : %p\n", &value[0]);

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 의미합니다.

	int * ptr = value;
	*ptr = 9999;

	printf("value[0]의 값 : %d\n", value[0]);

	ptr = ptr + 1;

	*ptr = 3333;

	printf("value[1]의 값 : %d\n", value[1]);
	*/

	// 최댓값과 최솟값
	/*
	int count[5] = { 1, 33, 7, 2, 6 };

	int max = 0;
	int min = 9999;

	for (int i = 0; i < 5; i++)
	{
		if (max < count[i])
		{
			max = count[i];
		}
				
		if (min > count[i])
		{
			min = count[i];
		}
	}

	printf("최댓값 : %d\n", max);
	printf("최솟값 : %d\n", min);
    */

	// 범용 포인터란?
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는
	// 포인터입니다.

	char grade = 'A';
	int age = 19;
	float weight = 70.5f;

	void * vPtr = &grade;

	// 범용 포인터는 현재 가리키는 자료형이 정해져 있지 않아
	// 값을 변경할 수 없습니다.
	// *vPtr = 'B';

	*(char*)vPtr = 'B';
	printf("grade의 값 : %c\n", grade);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는
	// 변수의 자료형으로 형 변환을 해주어야 합니다.

	vPtr = &age;
	*(int*)vPtr = 26;
	printf("age의 값 : %d\n", age);


}
