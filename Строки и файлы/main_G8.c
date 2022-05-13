#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void swap(int *pa, int *pb);

int main() {
    FILE *f;
    char string [1001] = {0};
    int array_nums[1001] = {0};
    char c = 0;
    int i = 0, j = 0, k = 0, factor = 0, mult = 1, current = 0;
    f = fopen("input.txt", "r");
    while ((c = fgetc(f)) != EOF && c != '\n') {
        string [i] = c;
        i++;
    }
    fclose (f);
    f = fopen("output.txt", "w");
    for (j = i; j >= 0; j--) {
        if (string [j] >= '0' && string [j] <= '9') {
            current = string [j] - '0';
            if (factor > 0) {
                mult *= 10;
                current *= mult;
                current = array_nums[k-1] + current;
                array_nums[k - 1] = current;
            }
            else {
                array_nums[k] = current;
                k++;
            }
            factor++;
        }
        else {
            factor = 0;
            mult = 1;
        }
    }
    for (int j = 0; j < k - 1; j++) {
        for (int m = 0; m < k - 1; m++) {
            if (array_nums[m + 1] < array_nums[m]) {
                swap(&array_nums[m], &array_nums[m + 1]);
            }
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%d ", array_nums[i]);
    }
    fclose (f);
    return 0;  
}

void swap(int *pa, int *pb) {
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}