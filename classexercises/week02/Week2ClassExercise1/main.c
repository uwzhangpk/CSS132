#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void printAnInteger(int variable)
{
    printf("printAnInteger got: %d\n", variable);
}

void printAnIntPointer(int * var_ptr)
{
    printf("printAnIntPointer got: %d\n", *var_ptr);
}

int main()
{
    // i is an integer, the DataType is an integer
    int i;
    // x_ptr is a pointer to an integer, the DataType is a pointer
    // x_ptr will get a memory address that will point to an integer
    int * x_ptr;
    // x_ptr now has the memory address of i
    x_ptr = &i;
    // i and *x_ptr now have the value 10
    i = 10;
    assert(i == *x_ptr);
    // i and *x_ptr are interchangable when we are using them
    i = i + *x_ptr;
    // both i and *x_ptr are now 20.
    // They are pointing to the same memory address
    assert((i == 20) && (*x_ptr == 20));
    // we can also assign values to *x_ptr
    *x_ptr = i + *x_ptr;
    // both i and *x_ptr are now 40
    assert((i == 40) && (*x_ptr == 40));

    // printAnInteger takes an int, so we can call it either way
    printAnInteger(i);
    printAnInteger(*x_ptr);

    // printAnIntPointer takes an int*, we have to give it a memory address
    // for i, we take the address of i by using &
    // for x_ptr, we already have an integer pointer
    printAnIntPointer(&i);
    printAnIntPointer(x_ptr);

    printf("If we got here all is well!\n");
    return 0;
}
