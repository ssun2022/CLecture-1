#include <stdio.h>

void main()
{
    // switch문
    /*
    // 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

    int count = 100;

    switch (count)
    {
        // break문이란?
        // 특정한 지점에서 분기를 탈출하는 제어문입니다.
        case 0: printf("던전 이동\n");
            break;
        case 1: printf("마을 이동\n");
            break;
        case 2: printf("광산 이동\n");
            break;
        default: printf("잘못된 값이 들어왔습니다.");
    }

    char check = 'A';

    // switch 문에는 조건식으로 실수형 변수와 실수형 상수를
    // 사용할 수 없습니다.
    switch (check)
    {
        // break문이란?
        // 특정한 지점에서 분기를 탈출하는 제어문입니다.
        case 'A': printf("마법사\n");
             break;
        case 'B': printf("도적\n");
             break;
        case 'C': printf("전사\n");
            break;
        default: printf("잘못된 값이 들어왔습니다.");
    }
    */

    // 반복문이란?
    // 프로그램 내에서 특정한 작업을 반복적으로
    // 수행하는 명령문입니다.

    // 증감 연산자란?
    /*
    // 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자입니다.

    // 전위 증가 연산자
    // 변수의 값을 증감시킨 후에 연산을 수행합니다.
    int value = 0;
    int damage = 10;

    int result = ++value;
    int health = --damage;

    printf("result 변수의 값 : %d\n", result);
    printf("health 변수의 값 : %d\n", health);

    // 후위 증가 연산자
    // 연산을 수행한 다음 변수의 값을 증감시킵니다.
    result = value++;
    health = damage--;

    printf("result 변수의 값 : %d\n", result);
    printf("health 변수의 값 : %d\n", health);
    */

    // for문이란?
    // 초기식을 연산하여 조건식의 결과에 따라 특정한
    // 횟수만큼 반복하는 반복문입니다.

    // int i = 0; <- 초기식 설정
    // i < 5; <- 조건식 설정
    // i++ <- 증감식 설정

    // printf("Action") <- 반복할 내용
    for (int i = 0; i < 5; i++)
    {
        printf("Action\n");
    }

    // 1 ~ 10 까지의 합
    /*
    int result = 0;

    for (int i = 1; i <= 10; i++)
    {
        result += i;
    }

    printf("result 변수의 값 : %d", result);
    */

    // 5 4 3 2 1

}