#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

void print_rev(void);

int main() {
    print_rev();
    return 0;
} 

void print_rev(void) {
    char ch;
    scanf ("%c", &ch); //ввод очередного символа
    if (ch != '.') {
        print_rev (); //рекурсивный вызов для обработки оставшихся символов
        printf ("%c", ch); //вывод символа
    }
}