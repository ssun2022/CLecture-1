#include <stdio.h>

void main()
{
    // 2�� for��
    /*
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("Unity\n");
        }

        printf("Unreal\n");
    }
    */

    // ������
    /*
    // 1 * 1 = 1 ~ 9 * 9 = 81

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }
    */

    // while ���̶�?
    /*
    // Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ�
    // �ݺ����Դϴ�.

    int count = 5;

    while (count) // <- ���� ����
    {
        printf("Game Start\n");

        count--;
    }
    */

    // do-while ���̶�?
    /*
    // ���ǰ� ������� �� ���� �۾��� ������ ����
    // ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.
    do
    {
        printf("����\n");

    } while (0);
    */

    // continue ���̶�?
    // �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ����Դϴ�.
    for (int i = 1; i <= 10; i++)
    {
        if (i % 3 == 0)
            continue;

        printf("i�� �� : %d\n", i);
    }


}