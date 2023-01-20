#include <stdio.h>

void main()
{
    // 2중 for문
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

    // 구구단
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

    // while 문이란?
    /*
    // 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는
    // 반복문입니다.

    int count = 5;

    while (count) // <- 게임 루프
    {
        printf("Game Start\n");

        count--;
    }
    */

    // do-while 문이란?
    /*
    // 조건과 상관없이 한 번의 작업을 수행한 다음
    // 조건에 따라 명령문을 실행하는 반복문입니다.
    do
    {
        printf("실행\n");

    } while (0);
    */

    // continue 문이란?
    // 해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문입니다.
    for (int i = 1; i <= 10; i++)
    {
        if (i % 3 == 0)
            continue;

        printf("i의 값 : %d\n", i);
    }


}