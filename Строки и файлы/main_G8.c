#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    char string [1000] = {0};
    int array_nums[1000] = {0};
    char c = 0;
    int i = 0, j = 0, k = 0, factor = 0, mult = 1, current = 0, tmp = 0;
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
    for (int i = 0; i < k / 2; i++) {
        if (array_nums[i + 1] < array_nums[i]) {
            tmp = array_nums[i+1];
            array_nums[i + 1] = array_nums[i];
            array_nums[i] = tmp;
        }
    }
    for (int i = 0; i < k; i++) {
        fprintf(f, "%d ", array_nums[i]);
    }
    fclose (f);
    return 0;  
}