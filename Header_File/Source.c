#include <stdio.h>

void main()
{
    // 같은 이름의 변수를 사용할 수 없습니다.
    int value = 100;

    int VALUE = 200;

    // 변수의 명명규칙
    /*  <- 전체 주석 시작
        1. 변수의 이름은 대소문자를 구별합니다.

        2. 변수의 이름 숫자로 시작할 수 없습니다.
        ex) int 1data = 20;

        3. 변수의 이름은 공백을 포함하지 않습니다.
        ex) int Count Down = 10;

        4. 변수의 이름으로 특수 기호는 "_", "$"만 허용합니다.
        int signal$_ = 25;

        5. 변수의 이름으로 예약어를 사용할 수 없습니다.
        ex) int int = 20;
     */ // <- 전체 주석이 닫히는 부분

     // 상수란?
     /*
     // 프로그램이 실행되는 동안 더 이상 변경할 수 없는 메모리 공간입니다.
     value = 9999;
     value = 1;

     // 상수는 메모리 공간을 생성하는 동시에 초기화를 해주어야 하며, 한 번
     // 저장된 값을 더 이상 변경할 수 없습니다.
     const float pi = 3.14f;

     // pi = 6.66;
     // 상수의 경우 메모리 공간을 가지고 있지 않은 상수를 리터럴 상수라 하며,
     // 메모리 공간을 가지고 있는 상수를 심볼릭 상수라고 합니다.
     */

     // 표준 출력 함수
     // 일련의 데이터를 형식 문자열에 저장되어 있는
     // 형태로 출력하는 함수입니다.
    printf("안녕하세요.");

}