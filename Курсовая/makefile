all: prog
prog:  main_keys.o temp_functions.o
		gcc -o prog  main_keys.o temp_functions.o

main_keys.o:  main_keys.c mylibrary.h
				gcc -c -o  main_keys.o  main_keys.c

temp_functions.o: temp_functions.c
					gcc -c -o temp_functions.o temp_functions.c

clean:
		rm -rf *.o prog