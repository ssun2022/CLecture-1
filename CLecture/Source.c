#include <stdio.h>

void main()
{
	// �迭�̶�?
	/*
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.
	
	//   4     4     4  = 12 byte
	//   0	   1     2
	// [100] [200] [300]
	int room[3];

	// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.
	room[0] = 100;
	room[1] = 200;
	room[2] = 300;

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	// ������ ������ �˴ϴ�.

	for (int i = 0; i < 3; i++)
	{
		printf("room[%d]�� �� : %d\n", i, room[i]);
	}
	*/

	// �迭 �ʱ�ȭ
	/*
	// [0] = 1.5f , [1] = 2.5f ~ 
	float space[5] = { 1.5f, 2.5f, 3.5f, 4.5f, 5.5f };

	for (int i = 0; i < 5; i++)
	{
		printf("space[%d]�� �� : %f\n", i, space[i]);
	}

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� ������
	// �ε����� ���� �迭�� ũ�Ⱑ �����˴ϴ�.
	int dataTable[ ] = {10, 20, 30};

	for (int i = 0; i < 3; i++)
	{
		printf("dataTable[%d]�� �� : %d\n", i, dataTable[i]);
	}
	*/

	// �迭�� �ּ�
	/*
	int value[3] = { 5,10,15 };

	printf("value �迭�� �ּ� : %p\n", value);
	printf("value[0]�� �ּ� : %p\n", &value[0]);

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� �ǹ��մϴ�.

	int * ptr = value;
	*ptr = 9999;

	printf("value[0]�� �� : %d\n", value[0]);

	ptr = ptr + 1;

	*ptr = 3333;

	printf("value[1]�� �� : %d\n", value[1]);
	*/

	// �ִ񰪰� �ּڰ�
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

	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);
    */

	// ���� �����Ͷ�?
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ�
	// �������Դϴ�.

	char grade = 'A';
	int age = 19;
	float weight = 70.5f;

	void * vPtr = &grade;

	// ���� �����ʹ� ���� ����Ű�� �ڷ����� ������ ���� �ʾ�
	// ���� ������ �� �����ϴ�.
	// *vPtr = 'B';

	*(char*)vPtr = 'B';
	printf("grade�� �� : %c\n", grade);

	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű��
	// ������ �ڷ������� �� ��ȯ�� ���־�� �մϴ�.

	vPtr = &age;
	*(int*)vPtr = 26;
	printf("age�� �� : %d\n", age);


}
