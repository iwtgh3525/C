//동전 던지기 게임
#include <stdib.h> //stdib 헤더파일을 포함한다.
#include <stdio.h> //stdio 헤더파일을 포함한다.
#include <time.h> // time 헤더파일을 포함한다.

int coin_toss(void); // coin_toss함수가 메인 밑에 있으면 함수를 찾을 수 없기 때문에 함수의 원형을 선언한다.

int main(void) { // int main함수를 선언한다.
    int toss; // 변수 선언
    int heads = 0; //변수 선언과 초기화를 동시에 한다.
    int tails = 0; //변수 선언과 초기화를 동시에 한다.
    srand((unsigned)time(NULL)); //난수 생성기를 초기화한다.

    for (toss = 0; toss < 100; toss++) { //toss의 초기값은 0이고, toss가 100보다 작을때까지 반복
        if (coin_toss() == 1) { //coin_toss가 반환한 값이 1이면 true 아니면 else로
            heads++; //참일때
        } else {
            tails++; //거짓일때
        }
    }   
    printf("동전의 앞면: %d \n", heads); //출력한다.
    printf("동전의 뒷면: %d \n", tlails); //출력한다.
    return 0; //0을 반환한다.
}

int coin_toss(void) { //int coin_toss함수를 선언한다.
    int head = rand() % 2; // head를 선언하고 rand() % 2로 초기화한다.
    return head; //head를 반환한다.
}