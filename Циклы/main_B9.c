#include<stdio.h>

int main (void) {
    int a, i, j, num, current, check;
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
        current = num % 2;
        num = num / 10;
        if ( current == 0) {
            check ++;
        }
        /* printf("%d\n", current); */
    }
    if (check == i) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}