CC=gcc
CFLAGS=-g -Wall
OBJFLAGS=-g -Wall -c

targets=lab6 multiples smallest sundays zombie difference

all: $(targets)

zombie: zombie.c zombie.h
	$(CC) $(OBJFLAGS) $@.c

lab6: lab6.c zombie.o
	$(CC) $(CFLAGS) $^ -o $@

multiples: multiples.c
	$(CC) $(CFLAGS) $^ -o $@

smallest: smallest.c 
	$(CC) $(CFLAGS) $@.c -o $@

sundays: sundays.c 
	$(CC) $(CFLAGS) $@.c -o $@

difference: difference.c 
	$(CC) $(CFLAGS) $@.c -o $@ -lm

clean: 
	rm *.o $(targets)