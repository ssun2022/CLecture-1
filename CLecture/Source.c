#include <stdio.h>

void main()
{
    // switch��
    /*
    // � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.

    int count = 100;

    switch (count)
    {
        // break���̶�?
        // Ư���� �������� �б⸦ Ż���ϴ� ����Դϴ�.
        case 0: printf("���� �̵�\n");
            break;
        case 1: printf("���� �̵�\n");
            break;
        case 2: printf("���� �̵�\n");
            break;
        default: printf("�߸��� ���� ���Խ��ϴ�.");
    }

    char check = 'A';

    // switch ������ ���ǽ����� �Ǽ��� ������ �Ǽ��� �����
    // ����� �� �����ϴ�.
    switch (check)
    {
        // break���̶�?
        // Ư���� �������� �б⸦ Ż���ϴ� ����Դϴ�.
        case 'A': printf("������\n");
             break;
        case 'B': printf("����\n");
             break;
        case 'C': printf("����\n");
            break;
        default: printf("�߸��� ���� ���Խ��ϴ�.");
    }
    */

    // �ݺ����̶�?
    // ���α׷� ������ Ư���� �۾��� �ݺ�������
    // �����ϴ� ��ɹ��Դϴ�.

    // ���� �����ڶ�?
    /*
    // �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� ����ϴ� �������Դϴ�.

    // ���� ���� ������
    // ������ ���� ������Ų �Ŀ� ������ �����մϴ�.
    int value = 0;
    int damage = 10;

    int result = ++value;
    int health = --damage;

    printf("result ������ �� : %d\n", result);
    printf("health ������ �� : %d\n", health);

    // ���� ���� ������
    // ������ ������ ���� ������ ���� ������ŵ�ϴ�.
    result = value++;
    health = damage--;

    printf("result ������ �� : %d\n", result);
    printf("health ������ �� : %d\n", health);
    */

    // for���̶�?
    // �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
    // Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.
   
    // int i = 0; <- �ʱ�� ����
    // i < 5; <- ���ǽ� ����
    // i++ <- ������ ����

    // printf("Action") <- �ݺ��� ����
    for (int i = 0; i < 5; i++)
    {
        printf("Action\n");
    }

    // 1 ~ 10 ������ ��
    /*
    int result = 0;

    for (int i = 1; i <= 10; i++)
    {
        result += i;
    }

    printf("result ������ �� : %d", result);
    */
  
    // 5 4 3 2 1

}