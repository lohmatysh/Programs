#include<stdio.h>

int up(int num);

int main () {
    int a = 0;
    scanf("%d", &a);
    up(a);
    return 0;
} 

int up(int num) {
    int a, b, c, i, j;
    a = num;
    b = c = i = j= 0;
    while (a !=0 ) {
        b = a % 10;
        a = a / 10;
        c = a % 10;
        ++i;
        if (c < b) {
            ++j;
        }
        /* printf("%d %d %d %d\n", i, j, c, b); */
    }
    if (i == j) {
        printf("YES");
    }
    else {
        printf("NO");  
    }
    return 0;
}