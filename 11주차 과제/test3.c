// 삼각 함수 라이브러리
#include <math.h> //math 헤더파일을 포함한다.
#include <stdio.h> //stdio 헤더파일을 포함한다.

int main(void) { //int main함수를 선언한다.
    double pi = 3.1415926535; // 변수 선언과 초기화를 동시에 한다.
    double x,y; //변수 선언

    x = pi / 2; //x초기화
    y = sin(x); //y초기화
    printf("sin(%f)=%f\n",x,y); //출력한다.
    y = cos(x); //y초기화
    printf("cos(%f)=%f\n",x,y); //출력한다.
    }