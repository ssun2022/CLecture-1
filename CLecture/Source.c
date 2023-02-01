#include <stdio.h>
#include <stdlib.h> // 메모리 관련 헤더파일

int Factorial(int value)
{
	if (value == 1)
	{
		return 1;
	}

	return value * Factorial(value - 1);
}

inline void Process(int value)
{
	printf("%d", value);
}

int main()
{
	// 팩토리얼
	/*
	printf("!5 : %d", Factorial(3));
	*/

	// 인라인 함수
	/*
	// 함수를 호출하는 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	Process(10); // printf("%d", value);

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 
	// 속도가 빠르지만, 인라인 함수를 많이 사용하게 되면
	// 함수의 코드가 복사되기 때문에 실행 팡일의 크기가
	// 커지게 됩니다.
	*/

	// 동적 할당이란?
	
	// 프로그램을 실행 중에 필요한 만큼 메모리를 할당하는 작업입니다.

	char * cp = (char *)malloc(sizeof(char) * 5);
	int * p = (int *)malloc(sizeof(int));
	double * dp = (double *)malloc(sizeof(double));

	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경시킬
	// 수 있으며, 동적으로 메모리의 크기를 할당할 때 바이트 단위로
	// 지정합니다.

	cp[0] = 'A';
	cp[1] = 'B';
	cp[2] = 'C';
	cp[3] = 'D';
	cp[4] = 'E';

	// malloc 함수가 NULL을 반환하는 경우 오류가 발생하게 될 수도 
	// 있다라는 경고입니다.

	*p = 100;
	*dp = 36.5;

	printf("p 포인터 변수가 가리키는 값 : %d\n", *p);
	printf("dp 포인터 변수가 가리키는 값 : %lf\n", *dp);
	
	// 메모리를 동적 할당할 때 주소를 범용 포인터로 반환하기 때문에
	// 자료형을 변환한 다음 메모리에 할당해야 합니다.

	free(cp); // 메모리 해제 함수
	free(p); // 메모리 해제 함수
	free(dp); // 메모리 해제 함수

	// 댕글링 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.
	// p = NULL;

	// printf("\n해제된 p 포인터 변수가 가리키는 값 : %d\n", *p);
	

	// 지역 변수
	/*
	// 지정된 영역에서만 사용할 수 있는 변수이며, 지정된 영역을
	// 벗어나게 되면 메모리에서 해제되는 변수입니다.

	int x = 10;

	{
		int x = 20;
		printf("안에 있는 x의 값 : %d\n", x);
	}

	printf("밖에 있는 x의 값 : %d\n", x);
	*/

	return 0;
}
