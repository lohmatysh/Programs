all: 	prog
prog: 	main_keys.o temp_functions.o
			gcc -o prog main_keys.o temp_functions.o
main.o: main_course_project.c temp_functions.h
			gcc -c -o main_keys.o main_keys.c
func.o: func.c
			gcc -c -o temp_functions.o temp_functions.c
clean:
			rm -rf *.o prog