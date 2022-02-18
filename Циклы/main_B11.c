#include<stdio.h>

int main (void) {
    int a, i, j, num, current;
    scanf("%d", &a);
    num = a;
    i = 0;
    j = 0;
    do {
        a = a / 10;
        i++;
    }  while (!(a == 0));
    for (j = 0; j < i; j++) {
        current = num % 10;
        num = num / 10;
        printf("%d", current);
    }
    return 0;
}