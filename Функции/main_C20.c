#include<stdio.h>

int count(char a);

int main(void) {
    char a;
    count(a);
    return 0;
} 

int count(char a) {
    int i = 0;
    while (a != '.' && a != EOF && i >= 0) {
        scanf("%1c", &a);
        if (a == 40) { 
            ++i;
        } 
        else if (a == 41) {
            --i;
        }
    }
    if (i == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}