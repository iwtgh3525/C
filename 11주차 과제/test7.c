//삼각함수 그리기
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double rad(double degree) {
    return PI * degree / 180.0;
}
void drawbar(int hight) {
    for (int i = 0; i < height; i++) {
        printf("*");
    }
    printf("\n");
}

int main(void) {
    int degree,x,y;
    for (degree - 0; degree <= 90; degree += 10) {
        y = (int)(60 * sin(rad((double)degree)) + 0.5);
        drawbar(y);
    }
    return 0;
}