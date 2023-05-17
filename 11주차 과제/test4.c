#include <stdlib.h> //stdlib 헤더파일을 포함한다.
#include <stdio.h> //stdio 헤더파일을 포함한다.

int main(void) { //int main 함수를 선언한다.
    system("dir"); //라이브러리 함수를 호출한다.
    printf("아무 키나 치세요\n"); //출력한다.
    _getch(); //라이브러리 함수를 호출한다.
    system("cls"); //라이브러리 함수를 호출한다.

    return 0; //0을 반환한다.
}