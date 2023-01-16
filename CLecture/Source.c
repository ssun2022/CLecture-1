#include <stdio.h>

void main()
{
	// 비트 연산자란?
	/*
	// 비트 단위로 논리 연산을 수행하기 위해
	// 사용하는 연산자입니다.

	// AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.

	char x = 10; // 0000 1010
	char y = 3;  // 0000 0011
	             // 0000 0010

	printf("x와 y를 and 연산한 결과 : %d\n", x & y);

	// OR 연산자
	// 두 개의 피연산자 중에서 하나라도 1이 있다면 1을 반환하는 연산자입니다.
	char a = 11; // 0000 1011
	char b = 8;	 // 0000 1000
	             //	0000 1011

	printf("a와 b를 or 연산한 결과 : %d\n", a | b);

	// XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면 1을 반환하는 연산자입니다.
	char c = 3; // 0000 0011
	char d = 8; // 0000	1000
	            // 0000 1011

	printf("c와 d를 xor 연산한 결과 : %d\n", c ^ d);
	*/

	// 산술 연산자
	/*
	// 1. value1 = 리터럴 상수(10) + 리터럴 상수(20)
	// 2. value2 = 리터럴 상수(25) - 심볼릭 상수(30)
	// 3. value3 = x 변수(5) * y 변수(10)
	// 4. value4 = x 변수(5) / 리터럴 상수(5)
	// 5. value5 = x 변수(5) % 심볼릭 상수(30)

	int x = 5;
	int y = 10;
	const int data = 30;

	int value1 = 10 + 20;
	int value2 = 25 - data;
	int value3 = x * y;
	int value4 = x / 5;
	int value5 = x % data;

	printf("value1의 값 : %d\n", value1);
	printf("value2의 값 : %d\n", value2);
	printf("value3의 값 : %d\n", value3);
	printf("value4의 값 : %d\n", value4);
	printf("value5의 값 : %d\n", value5);

	// 나머지 연산자
	// 두 정수의 나숫셈 이후, 온전한 정수 몫으로
	// 표현할 수 없이 남은 값을 가리키는 연산자입니다.

	// 10 mod(%) 3 = 1
	// 9 mod(%) 3 = 0
	// 2 mod(%) 3 = 2
	*/

	// 시프트 연산자
	int variable = 12; // 0000 1100

	// 왼쪽 << 2번 시프트 
	// 0011 0000 = 48
	printf("variable 변수를 왼쪽으로 2번 시프트 연산한 결과 : %d\n", variable <<= 2);
	
	printf("variable 변수의 값 : %d\n", variable);

	// 오른쪽 >> 1번 시프트
	// 0000 0110 = 6
	printf("variable 변수를 오른쪽으로 1번 시프트 연산한 결과 : %d\n", variable >>= 1);

	// 복합 대입 연산자
	int signal = 10;
	printf("signal 변수의 값 : %d\n", signal);

	signal += 30;
	printf("signal 변수의 값 : %d\n", signal);

	signal -= 5;
	printf("signal 변수의 값 : %d\n", signal);

	signal *= 2;
	printf("signal 변수의 값 : %d\n", signal);

	signal /= 7;
	printf("signal 변수의 값 : %d\n", signal);


}