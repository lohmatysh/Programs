#include <stdio.h>

int main () {
    float X1, Y1, X2, Y2, k, b;
    scanf("%f%f%f%f", &X1, &Y1, &X2, &Y2);
    k = (Y1 - Y2) / (X1 - X2);
    b = Y2 - k * X2;
    printf("%.2f %.2f", k, b);
    return 0;
}