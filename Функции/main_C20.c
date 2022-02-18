#include<stdio.h>

int count(char a);

int main(void) {
    char a;
    count(a);
    return 0;
} 

int count(char a) {
    int i = 0;
    int j = 0;
    while (a != '.' && a != EOF) {
        scanf("%1c", &a);
        if (a == 40) { 
            ++i; 
            /* printf("%d %d\n", i, b); */
        } 
        else if (a == 41) {
            ++j;
        }
    }
    if (i == j) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}