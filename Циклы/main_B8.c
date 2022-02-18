#include<stdio.h>

int main (void) {
    int a, i, j, num, current, next, check;
    scanf("%d", &a);
    num = a;
    check = 0;
    i = 0;
    j = 0;
    do {
        a = a / 10;
        i++;
    }  while (!(a == 0));
    for (j = 0; j < i; j++) {
        current = num % 10;
        num = num / 10;
        if ( current == 9) {
            check ++;
        }
        /* printf("%d\n", current); */
    }
    if (check == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
