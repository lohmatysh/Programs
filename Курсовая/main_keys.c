#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
    char file_name[256]; 
    int rez = 0;
    opterr = 0;
    while ((rez = getopt(argc,argv, "hf:m:")) != -1) {
        switch (rez) {
            case 'h': printf("Set of supported keys by the application:\n\
                -h Description of the application functionality. List of keys that handles the given application and their purpose.\n\
                -f <filename.csv> input csv file to process.\n\
                -m <month number> if this key is given, then output only statistics for the specified month.\n"); break;
            case 'f': strcpy(file_name, optarg); 
                printf("Input csv file to process: %s\n", file_name); break;
            case 'm': printf("Mounth \"m = %s\".\n", optarg); break;
            case '?': printf("Error found! No such key %s exists. Try -h for help.\n", argv[optind-1]); break;
        }
    }
    return 0;
}