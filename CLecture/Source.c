#include <stdio.h>

void main()
{
	// ��Ʈ �����ڶ�?
	/*
	// ��Ʈ ������ �� ������ �����ϱ� ����
	// ����ϴ� �������Դϴ�.

	// AND ������
	// �� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ�ϴ� �������Դϴ�.

	char x = 10; // 0000 1010
	char y = 3;  // 0000 0011
	             // 0000 0010

	printf("x�� y�� and ������ ��� : %d\n", x & y);

	// OR ������
	// �� ���� �ǿ����� �߿��� �ϳ��� 1�� �ִٸ� 1�� ��ȯ�ϴ� �������Դϴ�.
	char a = 11; // 0000 1011
	char b = 8;	 // 0000 1000
	             //	0000 1011

	printf("a�� b�� or ������ ��� : %d\n", a | b);

	// XOR ������
	// �� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�, ���� �ٸ��� 1�� ��ȯ�ϴ� �������Դϴ�.
	char c = 3; // 0000 0011
	char d = 8; // 0000	1000
	            // 0000 1011

	printf("c�� d�� xor ������ ��� : %d\n", c ^ d);
	*/

	// ��� ������
	/*
	// 1. value1 = ���ͷ� ���(10) + ���ͷ� ���(20)
	// 2. value2 = ���ͷ� ���(25) - �ɺ��� ���(30)
	// 3. value3 = x ����(5) * y ����(10)
	// 4. value4 = x ����(5) / ���ͷ� ���(5)
	// 5. value5 = x ����(5) % �ɺ��� ���(30)

	int x = 5;
	int y = 10;
	const int data = 30;

	int value1 = 10 + 20;
	int value2 = 25 - data;
	int value3 = x * y;
	int value4 = x / 5;
	int value5 = x % data;

	printf("value1�� �� : %d\n", value1);
	printf("value2�� �� : %d\n", value2);
	printf("value3�� �� : %d\n", value3);
	printf("value4�� �� : %d\n", value4);
	printf("value5�� �� : %d\n", value5);

	// ������ ������
	// �� ������ ������ ����, ������ ���� ������
	// ǥ���� �� ���� ���� ���� ����Ű�� �������Դϴ�.

	// 10 mod(%) 3 = 1
	// 9 mod(%) 3 = 0
	// 2 mod(%) 3 = 2
	*/

	// ����Ʈ ������
	int variable = 12; // 0000 1100

	// ���� << 2�� ����Ʈ 
	// 0011 0000 = 48
	printf("variable ������ �������� 2�� ����Ʈ ������ ��� : %d\n", variable <<= 2);
	
	printf("variable ������ �� : %d\n", variable);

	// ������ >> 1�� ����Ʈ
	// 0000 0110 = 6
	printf("variable ������ ���������� 1�� ����Ʈ ������ ��� : %d\n", variable >>= 1);

	// ���� ���� ������
	int signal = 10;
	printf("signal ������ �� : %d\n", signal);

	signal += 30;
	printf("signal ������ �� : %d\n", signal);

	signal -= 5;
	printf("signal ������ �� : %d\n", signal);

	signal *= 2;
	printf("signal ������ �� : %d\n", signal);

	signal /= 7;
	printf("signal ������ �� : %d\n", signal);


}