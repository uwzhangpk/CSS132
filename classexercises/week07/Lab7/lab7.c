#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>


void printNumber(int number)
{
    // TODO: COMPLETE
}

void printPointer(int * ptr)
{
    // TODO: COMPLETE
}

// int add7(int number)
// it returns 7 plus whatever number is given to it
int add7(int number)
{
    // TODO: COMPLETE
    return 0;
}

// triples the value of given number
void tripleIt(int * number)
{
    // TODO: COMPLETE
}

void conceptsPointers()
{
    // declare an integer variable n and set it to 10
    // TODO: COMPLETE

    // display the value of n using printf
    // TODO: COMPLETE

    // declare an integer pointer n_ptr;
    // TODO: COMPLETE

    // set n_ptr to the address of n
    // TODO: COMPLETE

    // write an assert statement to check that the value of n
    // and the value pointed by n_ptr is the same
    // TODO: COMPLETE

    // increase the value of n by 5
    // TODO: COMPLETE

    // increase the value of n by 10 using only n_ptr
    // TODO: COMPLETE

    // write an assert statement to check that
    // n's value is 25, and
    // the value pointed by n_ptr is 25
    // TODO: COMPLETE

    // assume there is a function declared as
    // void printNumber(int number)
    // call this function to print n's value
    // TODO: COMPLETE

    // call printNumber to print the value pointed by n_ptr
    // TODO: COMPLETE

    // assume there is a function declared as
    // int add7(int number)
    // it returns 7 plus whatever number is given to it
    // call add7 with 10, and set n to the return value of add7
    // TODO: COMPLETE

    // write an assert statement to check that
    // n's value is 17
    // TODO: COMPLETE

    // set the value of n, to the return value from add7(100)
    // but use n_ptr in setting the value, not n
    // TODO: COMPLETE

    // assume there is a function declared as
    // void printPointer(int * ptr)
    // call printPointer with n_ptr to display the value pointer by n_ptr
    // TODO: COMPLETE

    // write an assert statement to check that the value of n
    // and the value pointed by n_ptr is the same
    // TODO: COMPLETE

    // call printPointer to display the value of n
    // TODO: COMPLETE

    // set n's value to 10 using n_ptr
    // TODO: COMPLETE

    // assume there is a function declared as
    // void tripleIt(int * number)
    // call tripleIt to triple the value of n
    // use n not n_ptr when calling tripleIt
    // TODO: COMPLETE

    // write an assert statement to check that the value of n is 30
    // TODO: COMPLETE

    // call tripleIt to triple the value of n
    // use n_ptr not n when calling tripleIt
    // TODO: COMPLETE

    // write an assert statement to check that
    // the value of n is 90,
    // the value pointed by n_ptr is 90, and
    // the value of n_ptr is the address of n
    // TODO: COMPLETE

}

// write a for loop to print numbers 1 to 10
void printNumbers1to10For()
{
    // TODO: COMPLETE
}

// write a while loop to print numbers 1 to 10
void printNumbers1to10While()
{
    // TODO: COMPLETE
}

// complete the following function
// void printNumbersTo(int number)
// to print numbers from 1 to number (inclusive)
void printNumbersTo(int number)
{
    // TODO: COMPLETE
}

// complete the following function
// void printNumbersRangeUsingFor(int start, int end)
// to print numbers from start to end (inclusive for start and end)
// use a for loop
void printNumbersRangeUsingFor(int start, int end)
{
    // TODO: COMPLETE
}

// complete the following function
// void printNumbersRangeUsingWhile(int start, int end)
// to print numbers from start to end (inclusive for start and end)
// use a while loop
void printNumbersRangeUsingWhile(int start, int end)
{
    // TODO: COMPLETE
}


// complete the following function
// int isDivisibleBy3(int number)
// returns 1 (same as true) when given number is divisble by 3, 0 otherwise
int isDivisibleBy3(int number)
{
    // TODO: COMPLETE
    return 0;
}

// complete the following function
// void printNDiv3UsingFor(int start, int end)
// to print numbers from start to end (inclusive for start and end)
// that are divisible by 3. Must use isDivisibleBy3. Must use for loop.
void printNDiv3UsingFor(int start, int end)
{
    // TODO: COMPLETE
}


// complete the following function
// to print numbers from start to end (inclusive for start and end)
// that are divisible by 3. Must use isDivisibleBy3. Must use while loop.
void printNDiv3UsingWhile(int start, int end)
{
    // TODO: COMPLETE
}

// complete the following function
// that returns the sum of number from 1 to number (inclusive)
// declare an integer variable sumN and set it to the return value
// of getSum(10)
int getSum(int number)
{
    // TODO: COMPLETE
    return 0;
}
// complete the following function
// int getSumDiv3(int number)
// that adds up all the number divisible by 3 in the range 1 to number (inclusive)
// Must use isDivisibleBy3
// declare an integer variable sumN3 and set it to the return value
// of getSumDiv3(10)

int getSumDiv3(int number)
{
    // TODO: COMPLETE
    return 0;
}

// complete the following function
// that adds up all the number divisible by 3
// from start to end (inclusive for start and end)
// Must use isDivisibleBy3
int getSumDivRange(int start, int end)
{
    // TODO: COMPLETE
    return 0;
}

void testSwitch()
{
    // TODO: An example that shows how you use switch statement
}

enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
void testEnum()
{
    // TODO: An example that shows how you use enum
}

void testSetBits() {
    // controller is set 0000 0000
    unsigned char controller = 0;

    // BIT-0 is the rightmost bit, marked with X: 0000 000X
    // TODO: Set BIT-1 of the controller


    // TODO: Set BIT-4 of the controller


    // TODO: Clear BIT-4 of the controller

}

int main()
{
    // TODO: Put appropriate tests here
    printf("Done\n");
    return 0;
}

