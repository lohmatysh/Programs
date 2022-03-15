#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int is_two_same(int size, int a[]);

int main() {
    enum {SIZE = 5};
    int a [SIZE] = {0};
    int i = 0, size = 0;
    scanf("%d", &size);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
    }
    printf("%d", is_two_same(size, a));;
    return 0;
}

int is_two_same(int size, int a[]) {
    int j = 0, k = 0, is_two_same_bool = 0;
    for (j = 0; j < size; j++) {
       for (k = j + 1; k < size; k++) {
            if (a [j] == a [k]) {                
                is_two_same_bool = 1;
                break;
            }
        }
    }
    return is_two_same_bool;
}