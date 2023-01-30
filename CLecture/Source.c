#include <stdio.h>

// 함수의 선언
// (자료형) (함수의 이름) (매개 변수)
// {

// }

void Function()
{
	printf("유닛 생성\n");
	printf("유닛 생성\n");
	printf("유닛 생성\n");
	printf("유닛 생성\n");
	printf("유닛 생성\n");
}

// 함수의 경우 자료형과 반환하는 값의 형태가 일치하지
// 않으면 원하는 값을 없을 수 없으며, 같은 이름의 함수를
// 중복으로 선언할 수 없습니다.
int Calculator()
{
	return 10;
}

// 매개 변수란?
// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기
// 위해 사용하는 변수입니다.
void Damage(int x)
{
	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 사라지며, 여러 개의
	// 매개 변수를 생성할 수 있습니다.
	printf("매개 변수의 값 : %d\n", x);
}

int main()
{
	// 문자열이란?
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

	// 포인터를 이용한 문자열
	/*
	const char * character = "School";

	// character[0] = 'T';

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록
	// 할 수 있으며, 문자열 상수는 데이터 영역의 읽기 전용 공간에
	// 저장되기 때문에 문자열의 값을 변경할 수 없습니다.

	printf("character의 값 : %s\n", character);

	character = "Student";

	// 문자열은 공백도 함께 메모리 공간에 포함하여 크기가
	// 결정되며, 마지막에 문자열의 끝을 알려주는 제어 문자가 
	// 추가됩니다.

	printf("character의 값 : %s\n", character);
	*/

	// 배열을 이용한 문자열
	/*
	char string [ ] = "Academy";
	char name [ ] = "Jam\0es";

	// 문자열의 경우 서로 연속적인 메모리 공간으로
	// 연결되어 있지만, 문자 배열 사이에 무효의 문자를
	// 넣게 되면 무효의 문자까지만 문자열을 출력합니다.
	printf("name의 값 : %s\n", name);
	printf("string의 값 : %s\n", string);

	string[0] = 'S';

	// 포인터 상수이기 때문에 새로운 메모리 공간을
	// 할당할 수 없습니다.
	// string = name;

	printf("string의 값 : %s\n", string);
	*/

	// 함수란?
	/*
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.
	Function();

	for (int i = 0; i < 3; i++)
	{
		printf("업그레이드\n");
	}

	printf("Calculator가 들고 있는 값 : %d\n", Calculator());
	*/

	return 1;

	// 인수란?
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.
	Damage(10);
	Damage(5);
	Damage(25);

	return 0;
}
