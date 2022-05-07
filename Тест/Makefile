all: prog

prog: main.o func.o
	gcc -o prog  main.o func.o

main.o: main.c
	gcc -c -o  main.c  main.o

func.o: func.c
	gcc -c -o func.c funcs.o

clean:
	Srm -rf *.o prog
	del *.o
	del prog.exe