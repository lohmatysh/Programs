#include<stdio.h>

int main (void) {
    int a, i, j, k, num, current, next, check, num_current, num_cycle, num_next;
    scanf("%d", &a);
    num = a;
    check = 0;
    i = 0;
    j = 0;
    k = 0;
    do {
        a = a / 10;
        i++;
    }  while (!(a == 0));
    for (k = 0; k < i; k++) {
        num_current = num % 10;
        num_cycle = num;
        for (j = 0; j < i - 1; j++) {
            num_cycle = num_cycle / 10;
            num_next = num_cycle % 10;
            if (num_current == num_next) {
                check = 1;
            }
            /* printf("%d %d %d %d\n", num_current, num_cycle, num, num_next); */
        }
        num = num / 10;
    }   
    if (check == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}