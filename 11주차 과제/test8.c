//공학용 계산기 프로그램 작성
#include <stdio.h> //stdio 헤더파일을 포함한다.
#include <math.h> //math 헤더파일을 포함한다.

int menu(void) { //int 자료형을 반환하는 menu함수를 선언한다.
    int n; // n을 선언한다.
    printf("1.팩토리얼\n"); //출력한다.
    printf("2.싸인\n"); //출력한다.
    printf("3.로그(base 10)\n"); //출력한다.
    printf("4.제곱근\n"); //출력한다
    printf("5.순열(nCp\n"); //출력한다
    printf("6.조합(nCr)\n"); //출력한다
    printf("7.종료\n"); //출력한다
    printf("선택해주세요: "); //출력한다
    scanf("%d,", &n); //입력받는다.
    return n; //n을 반환한다.
}
void factorial() { //반환값이 없는 factorial함수를 선언한다.
    long long n, result=1, i; //n과 i는 선언, result는 선언과 초기화를 동시에 한다.
    printf("정수를 입력하시오:"); //출력한다.
    scanf("%lld", &n); //입력받는다.
    for (i = 1; i <= n; i++) { //i의 초기값은 1이고, n보다 작거나 같을때까지 반복
        result = result * i; //변수 초기화
    printf("결과 = %lld\n\n", result); //출력한다.
    }
}
void sine() { //반환값이 없는 sine함수를 선언한다.
    double a, result; //변수 선언
    printf("각도를 입력하시오:"); //출력한다
    scanf("lf", &a); //입력받는다.
    result = sin(a);  //변수 초기화
    printf("결과 = %lf\n\n",result); //출력한다
}
void logBase10() { //반환값이 없는 logBase10함수를 선언한다.
    double a, result; //변수 선언
    printf("실수값을 입력하시오:"); //출력한다
    scanf("%lf",&a); //입력받는다.
    if (a <= 0.0) { //만약 a값이 0.0보다 작거나 같으면 참
        printf("오류\n"); //출력한다
    } else { //거짓일때
        result = log10(a); //변수 초기화
        printf("결과 = %lf\n\n", result); //출력한다
    }
}
int main(void) { //int main함수를 선언한다.
    while (1) { //무한반복
        switch (menu()) { //menu에서 반환한 값을 switch문에 넣는다.
            case 1: //1일때
                    factorial(); //함수 호출
                    break; //swihch문을 빠져나간다.
            case 2: //2일때
                    sine(); //함수 호출
                    break; //switch문을 빠져나간다.
            case 3: //3일때
                    logBase10(); //함수 호출
                    break; //switch문을 빠져나간다.
            case 7: //7일때
                    printf("종료합니다.\n"); //출력한다
                    return 0; //0을 반환한다.
            default: //위의 경우가 아닐때
                    printf("잘못된 선택입니다.\n"); //출력한다
                    break; //switch문을 빠져나간다.
        }
    }
}