#include <stdio.h>

int main () {
    int a, b, c, sum, mul; 
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    mul = a * b * c;
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    printf("%d*%d*%d=%d\n", a, b, c, mul);
    return 0;
}