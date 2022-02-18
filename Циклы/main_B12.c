#include<stdio.h>

int main (void) {
    int a, num, current, max, min;
    scanf("%d", &a);
    num = a;
    max = 0;
    min = 9;
    current = num % 10;
    while (!(a == 0)) {
        current = num % 10;
        num = num / 10;
        a = a / 10;
        if (current > max) {
            max = current;
        }
        if (current < min) {
            min = current;
        }
    }
    printf("%d %d\n", min, max); 
    return 0;
}