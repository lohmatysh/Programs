#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int sum_min(int a [], int N);

int main() {
    enum {SIZE = 30};
    int a [SIZE] = {0};
    int i = 0, size = 0;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &a [i]);
        size++;
    }
    sum_min(a, size);
    return 0;
}

int sum_min(int a [], int N) {
    int j = 0, k = 1, min = 0, min_num_1 = 0, min_num_2 = 0, sum = 0;
    min_num_1 = 0;
    min_num_2 = 1;
    min = a [0] + a [1];
    for (j = 0; j < N; j++) {
       for (k = 1; k < N; k++) {
            sum = a [j] + a [k];
            //printf("%d + %d = %d\n", a [j], a [k], (a [j] + a [k]));
            if (sum < min && (k != j)) {                
                min = a [j] + a [k];
                min_num_1 = j;
                min_num_2 = k;
            }
        }
    }
    printf("%d %d", min_num_1, min_num_2);
    return 0;
}