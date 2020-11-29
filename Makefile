.PHONY: all clean

all: libpiecetable.a

clean:
	rm libpiecetable.a piecetable.o list.o

libpiecetable.a: piecetable.o list.o
	ar rcs libpiecetable.a piecetable.o list.o

piecetable.o: piecetable.c list.h
	gcc -c -Wall piecetable.c 

list.o: list.c
	gcc -c -Wall list.c
