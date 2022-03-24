#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void func(int a[]);

int main() {
    int a [25] = {0};
    int i = 0, j = 0, size = 0;
    //scanf("%d", &size);
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &a [i * 5 + j]);
        }
    }
    func(a);
    return 0;
}

void func(int a[]) {
    int i = 0, j = 0, sum = 0, average = 0, num = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                sum = a [i * 5 + j] + sum; 
            }       
        }  
    }
    average = sum / 5;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (a [i * 5 + j] > average) {
                num++; 
            }       
        }  
    }
    printf("%d", num);
}