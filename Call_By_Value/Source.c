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

	printf("count�� �� : %d\n", count);
}


int main()
{
	// �� ��ȯ �˰���
	/*
	int x = 10;
	int y = 20;
	int temporarily = 0;

	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);

	// �� ������ ���� ��ȯ���ּ���.

	temporarily = y;
	y = x;
	x = temporarily;

	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);
	*/

	// call by value(���� ���� ����)
	/*
	// �μ��� ���޵Ǵ� ������ ������ �ִ�
	// ���� �Լ� ���� �Ű� ������ �����Ͽ�
	// �����ϴ� ȣ���Դϴ�.

	int num1 = 10;
	int num2 = 20;

	printf("num1�� �� : %d\n", num1);
	printf("num2�� �� : %d\n", num2);

	// �μ��� ��� �Լ��� �ִ� �Ű������� ���� ���� ������ ��
	// �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ����
	// ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ��մϴ�.
	Swap(num1, num2);

	printf("num1�� �� : %d\n", num1);
	printf("num2�� �� : %d\n", num2);
	*/

	// call by reference(������ ���� ����)
	/*
	// �Լ��� �Ű� ������ �μ��� ���޵� ������ ���� �ּڰ���
	// �����ϴ� �����ϴ� ����Դϴ�.
	int value1 = 10;
	int value2 = 20;

	printf("value1�� �� : %d\n", value1);
	printf("value2�� �� : %d\n", value2);

	ReferenceSwap(&value1, &value2);

	printf("value1�� �� : %d\n", value1);
	printf("value2�� �� : %d\n", value2);
	*/

	// ��� �Լ�
	/*
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��Դϴ�.
	// Function();

	CountFunction(3);
	*/

	return 0;
}
