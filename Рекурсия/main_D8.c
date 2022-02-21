#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int rec_p(int i, int n);
int rec_n(int i, int n);

int main() {
    int i = 0, n = 0;
    scanf("%d %d", &i, &n);
    if (i >= n) {
        rec_p(i, n);
    }
    else {
        rec_n(i, n);
    }
    return 0;
} 

int rec_p(int i, int n) {
    if (i < n) {
        return 0;
    }
    printf("%d ", i);
    i--;
    rec_p(i, n);
} 

int rec_n(int i, int n) {
    if (i > n) {
        return 0;
    }
    printf("%d ", i);
    i++;
    rec_n(i, n);
}
