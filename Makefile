compile: stdlib.c
	gcc -Wall -g -c stdlib.c

install: compile stdlib.o stdlib.h
	cp -v stdlib.o ../lib/stdlib.o
	cp -v stdlib.h ../include/stdlib.h

