#include <stdio.h>

void Swap(int x, int y)
{
	int temp = y;
	y = x;
	x = temp;
}

void ReferenceSwap(int* x, int* y)
{
	int temp = *y;
	*y = *x;
	*x = temp;
}

void Function()
{
	printf("Function Call\n");

	Function();
}

int CountFunction(int count)
{
	if (count == 1)
	{
		return;
	}

	CountFunction(count - 1);

	printf("count의 값 : %d\n", count);
}


int main()
{
	// 값 교환 알고리즘
	/*
	int x = 10;
	int y = 20;
	int temporarily = 0;

	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);

	// 두 변수의 값을 교환해주세요.

	temporarily = y;
	y = x;
	x = temporarily;

	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);
	*/

	// call by value(값에 의한 전달)
	/*
	// 인수로 전달되는 변수가 가지고 있는
	// 값을 함수 내의 매개 변수에 복사하여
	// 전달하는 호출입니다.

	int num1 = 10;
	int num2 = 20;

	printf("num1의 값 : %d\n", num1);
	printf("num2의 값 : %d\n", num2);

	// 인수의 경우 함수에 있는 매개변수의 수에 따라 전달할 수
	// 있는 인수의 수가 결정되며, 값을 전달하는 인수와 값을
	// 전달받는 매개 변수의 자료형이 서로 일치해야합니다.
	Swap(num1, num2);

	printf("num1의 값 : %d\n", num1);
	printf("num2의 값 : %d\n", num2);
	*/

	// call by reference(참조에 의한 전달)
	/*
	// 함수의 매개 변수에 인수로 전달된 변수의 원래 주솟값을
	// 저장하는 전달하는 방법입니다.
	int value1 = 10;
	int value2 = 20;

	printf("value1의 값 : %d\n", value1);
	printf("value2의 값 : %d\n", value2);

	ReferenceSwap(&value1, &value2);

	printf("value1의 값 : %d\n", value1);
	printf("value2의 값 : %d\n", value2);
	*/

	// 재귀 함수
	/*
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다.
	// Function();

	CountFunction(3);
	*/

	return 0;
}
