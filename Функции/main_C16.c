#include<stdio.h>

int simple(int a);

int main () {
    int a = 0;
    scanf("%d", &a);
    simple(a);
    return 0;
} 

int simple(int a) {
    int i, j, num, check, check_div;
    check = check_div = 0;
    i = num = a;
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