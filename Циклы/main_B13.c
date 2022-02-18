#include<stdio.h>

int main (void) {
    int a, i, j, num, current, even, odd, check;
    scanf("%d", &a);
    num = a;
    i = 0;
    j = 0;
    check = 0;
    even = 0;
    odd = 0;
    do {
        a = a / 10;
        i++;
    }  while (!(a == 0));
    for (j = 0; j < i; j++) {
        current = num % 10;
        check = current % 2;
        num = num / 10;
        if (check == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("%d %d\n", even, odd); 
    return 0;
}