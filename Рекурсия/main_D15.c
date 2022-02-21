#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int max_find(int max);

int main() {
    int max = 0;
    scanf("%d", &max);
    max_find(max);
    return 0;
} 


int max_find(int max) {
    int a = 0;
    scanf("%d", &a);
    if (a == 0) {
        printf("%d", max);
        return 0;
    }
    if (a > max) {
        max = a;
    }
    max_find(max);
}