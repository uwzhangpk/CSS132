CC     = gcc
CFLAGS = -Wall -Wextra -g
LIBS   = -lm

all: coord_test

coord_test: coord.o coord_test.o
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	rm -f coord_test *.o
