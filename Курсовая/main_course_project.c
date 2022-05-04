#include <stdio.h>
#include <unistd.h>

struct data {
    int year, month, day, hour, min, t;
};

struct temperature {
    long long signed int sum;
    long unsigned int count;
    struct data info;
    int max_t;
    int min_t;
} month[12] = {0};

int average_value (struct temperature* month, int n) {
    long long signed int sum_f = month[n].sum, average_f = 0;
    long unsigned int count_f = month[n].count;
    average_f = sum_f / count_f;
    if (average_f == 0) {
        return 0;
    }
    else {
        return average_f;
    }
}

int max_value (struct temperature* month, int n, int t) {
    int max_f;
    if (month[n].count != 0) {
        max_f = month[n].max_t;
    }
    else {
        max_f = -100;
    }
    if (t > max_f) {
        max_f = t;
    }
    return max_f; 
}

int min_value (struct temperature* month, int n, int t) {
    int min_f;
    if (month[n].count != 0) {
        min_f = month[n].min_t;
    }
    else {
        min_f = 100;
    }
    if (t < min_f) {
        min_f = t;
    }
    return min_f; 
}

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
                printf("=================================================\n"); 
                printf("Input csv file to process: %s\n", file_name); 
                printf("=================================================\n"); break;
            case 'm': strcpy(month_number, optarg);
                printf("=================================================\n"); 
                printf("Current month: %s\n", month_number); 
                printf("=================================================\n"); break;
            case '?': printf("=================================================\n"); 
                printf("Error found! No such key %s exists. Try -h for help.\n", argv[optind-1]); 
                printf("=================================================\n"); break;
        }
    }
    // Считывание данных из файла
    FILE *f = fopen(file_name, "r");
    while ((a = (fscanf(f, "%d; %d; %d; %d; %d; %d", &y, &m, &d, &h, &mi, &t))) != EOF) {
        if (a != 6) {
            char error[100] = {0};
            fscanf(f, "%[^\n]", error);
            fprintf(stderr, "Error string: %s\n", error);
        } else {
            //printf("Ok string: %d; %d; %d; %d; %d; %d\n", y, m, d, h, mi, t);
            month[m].info.day = d;
            month[m].info.month = m;
            month[m].info.hour = h;
            month[m].info.min = mi;
            month[m].min_t = min_value(month, m, t);
            month[m].max_t = max_value(month, m, t);
            month[m].sum += t;
            month[m].count++;
        }
    }
    // Вывод данных
    printf("=================================================\n"); 
    for (int i = 1; i <= 12; i++) {
        printf("Month %d Average = %d Max = %d Min = %d Sum = %lld Count = %lu\n", i, average_value(month, i), month[i].max_t, month[i].min_t, month[i].sum, month[i].count);
    }
    printf("=================================================\n"); 
    return 0;
}