CC     = gcc
CFLAGS = -Wall -Wextra -g

cbuffer_test: cbuffer.o fifo_test.o
	$(CC) -o cbuffer_test cbuffer.o fifo_test.o

clean:
	rm -f cbuffer_test *.o
