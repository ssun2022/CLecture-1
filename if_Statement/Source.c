#include <stdio.h>

void main()
{
	// ���ǹ��̶�?
	// � ������ �־��� �� �ش� ���ǿ� ����
	// ������ �����ϵ��� �����ϴ� ��ɹ��Դϴ�.

	// ���� ������
	/*
	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶��
	// ���� ��Ÿ���� �������Դϴ�.
	int num1 = 5 < 10;
	int num2 = 5 > 10;
	int num3 = 10 <= 10;
	int num4 = 5 >= 10;
	int num5 = 1 == 1;
	int num6 = 1 != 1;

	printf("num1�� �� : %d\n", num1);
	printf("num2�� �� : %d\n", num2);
	printf("num3�� �� : %d\n", num3);
	printf("num4�� �� : %d\n", num4);
	printf("num5�� �� : %d\n", num5);
	printf("num6�� �� : %d\n", num6);
	*/

	// if ��
	/*
	// � Ư���� ������ ���Ͽ� ������ "��"�̸�
	// ����Ǵ� ��ɹ��Դϴ�.

	int health = 0;

	if (health <= 0)
	{
		printf("Game Over");
	}
	*/

	// else if ��
	/*
	// if ���� ������ Ʋ�� �� else if���� ������ �´ٸ� ����Ǵ�
	// ��ɹ��Դϴ�.
	int level = 10;

	if (level == 5)
	{
		printf("����");
		// if ���� ����� ��� ���ǹ��� ������ ���� ��
		// ���� ���� �ִ� ���ǹ��� ����˴ϴ�.
	}
	else if (level == 10)
	{
		printf("�±�");

		if (level == 10)
		{
			printf("2�� �±�");
		}
	}
	else if (level == 30)
	{
		printf("����");
	}
	*/

	// else ��
	// if ���� else if ���� ������ �� Ʋ���� ����Ǵ� ��ɹ��Դϴ�.

	int exp = 1000;

	if (exp == 250)
	{
		printf("??? ������ ���� ����");
	}
	else if (exp == 500)
	{
		printf("??? ������ ���� ����");
	}
	else
	{
		printf("??? ������ �Ǹ� ����");
	}


}