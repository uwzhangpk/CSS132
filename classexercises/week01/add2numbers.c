/**
 * Add two numbers
 * Looking at intermediate compilation steps
 *
 * To get assemply code use:gcc -S add2numbers.c -o add2numbers.s
 * 
 * To compile use: gcc -g add2numbers.c -o add2numbers.o
 * To get machine code use: objdump -S --disassemble add2numbers.o > add2numbers.dump
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i = 10;
   int j = 20;
   int k = i + j;
   printf("Adding two numbers, the result is %d\n", k);
   return 0;
}
