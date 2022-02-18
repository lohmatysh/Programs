#include <stdio.h>

int main () {
    float a, b, c, avr;
    scanf("%f%f%f", &a, &b, &c);
    avr = (a + b + c) / 3;
    printf("%.2f\n", avr);
    return 0;
}