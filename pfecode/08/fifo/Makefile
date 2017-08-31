CC     = gcc
CFLAGS = -Wall -Wextra -g

all: cbuffer_test llist_test

cbuffer_test: cbuffer.o fifo_test.o
	$(CC) -o cbuffer_test cbuffer.o fifo_test.o

llist_test: llist.o fifo_test.o
	$(CC) -o llist_test llist.o fifo_test.o

clean:
	rm -f cbuffer_test llist_test *.o
