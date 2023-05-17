//나무 높이 측정
#include <math.h> //math 헤더파일을 포함한다.
#include <stdio.h> //stdio 헤더파일을 포함한다.

int main(void) { //int main함수를 선언한다.
    double height, distance, tree_hight, degrees, radians; //변수 선언
    
    printf("나무와의 길이(단위는 미터:)"); //출력한다.
    scanf("lf", &distance); //입력받는다.

    printf("측정자의 키(단위는 미터:)"); //출력한다.
    scanf("lf", &height); //입력받는다.

    printf("각도(단위는 도:)"); //출력한다.
    scanf("lf", &degrees); //입력받는다.

    radians = degrees * (3.141592 / 180.0); //변수 초기화

    tree_hight = tan(radians) * distance + height; //변수 초기화
    printf("나무의 높이(단위는 미터): %lf\n", tree_height); //출력한다.

    return 0; //0을 반환한다.
    }