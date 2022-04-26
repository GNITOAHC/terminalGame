
CC = gcc

main: main.c getTitle.o check.o interact.o
	$(CC) main.c getTitle.o check.o interact.o -o main

check.o: check.c
	$(CC) -c check.c

interact.o: interact.c
	$(CC) -c interact.c

getTitle.o: getTitle.c
	$(CC) -c getTitle.c
clean:
	rm *.o main
