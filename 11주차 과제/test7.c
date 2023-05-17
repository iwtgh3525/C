//삼각함수 그리기
#include <stdio.h> //stdio 헤더파일을 포함한다.
#include <math.h> //math 헤더파일을 포함한다.
#define PI 3.141592 //PI라는 전처리상수를 선언한다.

double rad(double degree) { //매개변수 double형을 받고 double를 반환하는 함수를 선언한다.
    return PI * degree / 180.0; //PI * degree / 180.0;을 반환한다.
}
void drawbar(int hight) { //반환값이 없고 매개변수로 int자료형을 받는 함수를 선언한다.
    for (int i = 0; i < height; i++) { //i의 초기값은 0이고, height값보다 작을때까지 반복
        printf("*"); //출력한다.
    }
    printf("\n"); //출력한다.
}

int main(void) { //int main함수를 선언한다.
    int degree,x,y; //변수 선언
    for (degree = 0; degree <= 90; degree += 10) { //degree의 초기값은 0이고, degree의 값이 90보다 작거나 같을때까지 반복
        y = (int)(60 * sin(rad((double)degree)) + 0.5); //y값을 (int)(60 * sin(rad((double)degree)) + 0.5)로 초기화한다.
        drawbar(y); //매개변수로 y를 넣어서 함수를 호출한다.
    }
    return 0; //0을 반환한다.
}