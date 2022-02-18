#include<stdio.h>

int main (void) {
    int i, j, num, check, check_div;
    scanf("%d", &num);
    check = check_div = 0;
    i = num;
    j = 2;
    for (j = 2; j < i + 1; j++) {
        check = num % j;
        if (check == 0) {
        check_div ++;
        }
        /* printf("j = %d check = %d check_div = %d\n", j, check, check_div); */
    }
    if (check_div > 1 || num == 0 || num == 1) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}