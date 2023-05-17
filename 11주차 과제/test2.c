//자동차 게임
#include <stdlib.h> //stdlib 헤더파일을 포함한다.
#include <stdio.h> //stdio 헤더파일을 포함한다.
#include <conio.h> //conio 헤더파일을 포함한다.
#include <time.h> //time 헤더파일을 포함한다.

void disp_car(int car_number, int distance) { //반환값이 없고, 매개변수로 int car_number, int distance를 받는 함수를 선언한다.
    int i; //변수 선언
    printf("CAR #%d:", car_number); //출력한다.
    for(i=0; i<distance/10; i++) { //i의 초기값은 0이고, i가 distance/10보다 작을때까지 반복
        printf("*"); //출력한다.
    }
    printf("\n"); //출력한다.
}
int main(void) { //int main함수를 선언한다.
    int i; //변수 선언
    int car1_dist=0, ar2_dist=0; //변수 선언과 초기화를 동시에 한다.

    srand((unsigned)time(NULL)); //난수 생성기를 초기화한다.

    for(i = 0; i < 6; i++) { //i의 초기값은 0이고, 6보다 작을때까지 반복
        car1_dist += rand() % 100; //rand() % 100을 누적시킨다.
        car2_dist += rand() % 100; //rand() % 100을 누적시킨다.
        disp_car(1,car1_dist); //매개변수로 1,car1_dist를 넣어서 호출한다.
        disp_car(2,car2_dist); //매개변수로 2,car2_dist를 넣어서 호출한다.
        printf("----------------\n"); //출력한다.
        _getch(); //라이브러리함수 호출
    }
    return 0; //0을 반환한다.
}