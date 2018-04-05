CFLAGS=-std=c99 -Wall

include_guards: main.c module_one.o module_two.o
	gcc $(CFLAGS) main.c module_one.o module_two.o -o include_guards

module_one.o: module_one.c module_one.h
	gcc $(CFLAGS) -c module_one.c

module_two.o: module_two.c module_two.h
	gcc $(CFLAGS) -c module_two.c
