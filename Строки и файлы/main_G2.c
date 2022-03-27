#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main() {
    FILE *f;
    int n = 0;
    char c_num = 50, c_letter = 65;
    f = fopen("input.txt", "r");
    fscanf(f, "%d", &n);
    fclose (f);
    f = fopen("output.txt", "w");
    for (int i = 0; i < n; i++) {
        if ((i % 2) != 0) {
            fprintf (f, "%c", c_num);
            if (c_num < 56) {
                c_num = c_num + 2;      
            }
            else  {
                c_num = 50;
            }
        }
        else {
            fprintf (f, "%c", c_letter); 
            c_letter++;
        }
    }
    fclose (f);
    return 0;  
}