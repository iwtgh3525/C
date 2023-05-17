//시간 맞추기 게임
#include <stdio.h> //stdio 헤더파일을 포함한다.
#include <time.h> //time 헤더파일을 포함한다.

int main(void) { //int main함수를 선언한다.
    time_T start, end; //변수 선언
    start = time(NULL); //변수 초기화
    printf("10초가 되면 아무 키나 누르세요\n"); //출력한다.
    while(1) { //무한반복
        if (getchar()) //만약 받아온 문자가 참이면 브레이크
            break; // while문 빠져나옴옴
    }
    printf("종료되었습니다.\n"); //출력한다.
    end = time(NULL); //변수 초기화
    printf("경과된 시간은 %ld 초입니다.\n", end - start); //출력한다.
    return 0; //0을 반환한다.
}