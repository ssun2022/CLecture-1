#include <stdio.h>

void main()
{
	// �����Ͷ�?
	// �޸��� �ּڰ��� ������ �� �ִ� �����Դϴ�.

	// ���� ������
	/*
	int data = 100;
	int count = 5;

	int * ptr = &data;

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ����
	// �� ���� �ּҸ� ����Ű�� �˴ϴ�.
	printf("data�� �ּ� : %p\n", &data);

	printf("ptr�� �� : %p\n", ptr);
	printf("ptr�� �ּ� : %p\n", &ptr);

	ptr = &count;

	printf("count�� �ּ� : %p\n", &count);

	printf("ptr�� �� : %p\n", ptr);
	*/

	// �����Ͱ� ����Ű�� �ڷ���
	/*
	char alphabet = 'A';
	int value = 10;
	double decimal = 7.5;

	// ������ ������ ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�
	// �����Ͱ� ����Ű�� �޸��� �ڷ����� ��Ȯ�ϰ� �������־�� �մϴ�.
	char * cPtr = &value;
	int * iPtr = &decimal;
	double * dPtr = &alphabet;
	
	printf("cPtr�� ����Ű�� �޸��� �� : %c\n", *cPtr);
	printf("iPtr�� ����Ű�� �޸��� �� : %d\n", *iPtr);
	printf("dPtr�� ����Ű�� �޸��� �� : %lf\n", *dPtr);
	*/

	// ������ ������ ũ��
	/*
	char character = 'X';

	char * charPtr = &character;

	printf("charPtr�� ����Ű�� �޸��� �� : %c\n", *charPtr);

	*charPtr = 'E';

	printf("charPtr�� ����Ű�� �޸��� �� : %c\n", *charPtr);

	// ������ ������ ũ��� CPU�� �� ���� ó���� �� �ִ� ũ��� ��������,
	// �� ���� ó���� �� �ִ� ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.
	printf("charPtr�� ũ�� : %d", sizeof(charPtr));
	*/

	// ��� ���� ������
	/*
	int x = 20;
	int y = 30;
	                  
	const int * ptr = &x; // [x�� �����ּ�]----->[x] 

	x = 300;

	// ������ ������ ����� �����Ͽ�, ������ ������ ����Ű�� �ִ� �ּҿ�
	// �����ϴ� ���� ������ �� ������ �����մϴ�.
	// *ptr = 300;

	ptr = &y;
	y = 1000;
	*/

	// ������ ���
	int monster1 = 10;
	int monster2 = 20;

	// [monster1�� �����ּ�] ------> monster1
	int * const ptr = &monster1;

	*ptr = 50;

	monster1 = 300;

	// ptr = &monster2;
}