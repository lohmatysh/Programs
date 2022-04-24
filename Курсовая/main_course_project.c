#include <stdio.h>
#include <unistd.h>

struct data {
    int year, month, day, hour, min, t;
};

struct temperature {
    int sum;
    int count;
    struct data max, min;
} month[12] = {0};

int main (int argc, char *argv[]) {
    char file_name[256];
    char month_number[256];
    int a, y, m, d, h, mi, t, rez = 0;
    opterr = 0;
    // Описание ключей для программы
    while ((rez = getopt(argc, argv, "hf:m:")) != -1) {
        switch (rez) {
            case 'h': printf("Set of supported keys by the application:\n\
                -h Description of the application functionality. List of keys that handles the given application and their purpose.\n\
                -f <filename.csv> input csv file to process.\n\
                -m <month number> if this key is given, then output only statistics for the specified month.\n"); break;
            case 'f': strcpy(file_name, optarg); 
                printf("Input csv file to process: %s\n", file_name); break;
            case 'm': strcpy(month_number, optarg); 
                printf("Current month: %s\n", month_number); break;
            case '?': printf("Error found! No such key %s exists. Try -h for help.\n", argv[optind-1]); break;
        }
    }
    // Считывание данных из файла
    FILE *f = fopen("temperature_small.csv", "r");
    while ((a = (fscanf(f, "%d; %d; %d; %d; %d; %d", &y, &m, &d, &h, &mi, &t))) != EOF) {
        if (a != 6) {
            char error[100] = {0};
            fscanf(f, "%[^\n]", error);
            fprintf(stderr, "Error string: %s\n", error);
        } else {
            //printf("Ok string: %d; %d; %d; %d; %d; %d\n", y, m, d, h, mi, t);
            month[m].sum += t;
            month[m].count++;
            month[m].max.t = t;
            month[m].max.day = d;
            month[m].max.month = m;
            month[m].max.hour = h;
            month[m].max.min = mi;
        }
    }
    //printf("Month %d sum = %d count = %d\n", 3, month[3].sum, month[3].count);
    return 0;
}