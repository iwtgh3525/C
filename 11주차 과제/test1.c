//동전 던지기 게임
#include <stdib.h> //stdib 헤더파일을 포함한다.
#include <stdio.h> //stdio 헤더파일을 포함한다.
#include <time.h> // time 헤더파일을 포함한다.

int coin_toss(void); //

int main(void) {
    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL));

    for (toss = 0; toss < 100; toss++) {
        if (coid_toss() == 1) {
            heads++;
        } else {
            tails++;
        }
    }   
    printf("동전의 앞면: %d \n", heads);
    printf("동전의 뒷면: %d \n", tlails);
    return 0;
}

int coin_toss(void) {
    int head = rand() % 2;
    return head;
}