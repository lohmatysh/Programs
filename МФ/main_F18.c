#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void func(int a[]);

int main() {
    int a [100] = {0};
    int i = 0, j = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            scanf("%d", &a [i * 10 + j]);
        }
    }
    func(a);
    return 0;
}

void func(int a[]) {
    int i = 0, j = 0, sum = 0, max = 0;
    for (i = 0; i < 10; i++) {
        max = a [i * 10];
        for (j = 0; j < 10; j++) {
            if (a [i * 10 + j] > max) {
                max = a [i * 10 + j] ; 
            }       
        }
        sum = sum + max; 
    }
    printf("%d", sum);
}