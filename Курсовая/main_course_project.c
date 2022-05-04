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

int average_value (struct temperature* month, int n) {
    int sum_f = month[n].sum, count_f = month[n].count, average_f = 0;
    average_f = sum_f / count_f;
    if (average_f == 0) {
        return 0;
    }
    else {
        return average_f;
    }
}

int max_value (struct temperature* month, int n, int t) {
    int max_f = t;
    if (t > max_f) {
        max_f = t;
    }
    return max_f; 
}

int min_value (struct temperature* month, int n, int t) {
    int min_f = month[n].min.t;
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
            month[m].sum += t;
            month[m].count++;
            month[m].max.t = max_value(month, m, t);
            //month[m].min.t = min_value(month, m, t);
            month[m].max.day = d;
            month[m].max.month = m;
            month[m].max.hour = h;
            month[m].max.min = mi;
        }
    }
    // Вывод данных
    printf("=================================================\n"); 
    for (int i = 1; i <= 12; i++) {
        printf("Month %d Average = %d Max = %d Min = %d\n", i, average_value(month, i), month[i].max.t, month[i].min.t);
    }
    return 0;
}