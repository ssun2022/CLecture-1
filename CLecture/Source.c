#include <stdio.h>
#include <windows.h>
#include <time.h>

void main()
{
	// ���� �Լ�
	/*
	// rand : 0 ~ 32767 ������ ���� ���� ��ȯ�մϴ�.
	
	// rand() �Լ��� ���α׷��� ������ �� ���� �������� 
	// ������ ���α׷��� ���� �� ������ѵ� ������ ���� ��Ÿ���ϴ�.

	// srand() �Լ��� rand() �Լ��� ���Ǵ� ���� �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	// �Ű������� seed���� �̿��Ͽ� ������ ���� �����մϴ�.
	srand(time(NULL));

	// time() �Լ��� UCT �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����
	// �ð��� ��(sec)�� ��ȯ�ϴ� �Լ�

	for(int i = 0; i < 10; i++)
	{
		// 0 ~ 9 ������ ���� �������� �غ��Կ�.
		printf("������ �� : %d\n", rand() % 10 + 1);
	}
	*/

	// ǥ�� �Է� �Լ�
	/*
	// ���� ������ �����͸� �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.
	
	int value = 0;

	scanf_s("%d", &value);

	printf("value �� : %d", value);
    */

	// UP-DOWN ����
	/*
	int life = 5;
	
	srand(time(NULL));

	int computer = rand() % 50 + 1;
	int answer = 0;

	while (life > 0) 
	{
		printf("��ǻ�Ͱ� ������ �ִ� �� : ");
		scanf_s("%d", &answer);

		if (answer > computer)
		{
			printf("��ǻ�Ͱ� ������ �ִ� �� ���� Ů�ϴ�.\n");
			life--;
		}
		else if (answer < computer)
		{
			printf("��ǻ�Ͱ� ������ �ִ� �� ���� �۽��ϴ�.\n");
			life--;
		}
		else if (answer == computer)
		{
			printf("��ǻ�Ͱ� ������ �ִ� ���� �˾Ƴ½��ϴ�.");
			break;
		}
	}

	if (life == 0)
	{
		printf("��ǻ�Ͱ� ������ �ִ� ���� �˾Ƴ��� ���߽��ϴ�.\n");
		printf("��ǻ�Ͱ� ������ �ִ� �� : %d", computer);
	}
	*/

	// �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	int data = 10;
	// ������ �޸� ���α׷��� ����� ������ ��� �ٲ�ϴ�.

	// %p : �޸� �ּҸ� Ȯ���ϴ� ���� ������
	printf("data ������ �ּ� : %p", &data);


}