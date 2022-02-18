#include<stdio.h>

int main (void) {
    int a, i, num, current, next, check;
    scanf("%d", &a);
    num = a;
    i = 0;
    check = 0;
    while (a / 10 != 0) {
        current = num % 10;
        num = num / 10;
        next = num % 10;
        a = a / 10;
        i++;
        if (current > next) {
            check ++;
        }
        /* printf("%d %d\n", current, check); */
    }  
    if (check == i) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
