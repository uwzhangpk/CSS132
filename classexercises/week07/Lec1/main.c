#include <stdio.h>
#include <stdlib.h>

void showDataSizes()
{
    // size_t is an unsigned type, so only positive numbers
    size_t size;

    char c_char;
    size = sizeof(c_char);
    printf("Size of a char is %lu\n", size);
    // how big is an int;
    int x_int;
    size = sizeof(x_int);
    // printf for size_t is dependent on operating system
    // but using %ul  for printing "unsigned long" usually works
    printf("Size of an int is %lu\n", size);
    short x_short;
    size = sizeof(x_short);
    printf("Size of a short is %lu\n", size);
    long l_long;
    size = sizeof(l_long);
    printf("Size of a long is %lu\n", size);
    unsigned long u_long;
    size = sizeof(u_long);
    printf("Size of an unsigned long is %lu\n", size);
    float f_float;
    size = sizeof(f_float);
    printf("Size of a float is %lu\n", size);
    double d_double;
    size = sizeof(d_double);
    printf("Size of a double is %lu\n", size);
    long double l_double;
    size = sizeof(l_double);
    printf("Size of a long double is %lu\n", size);
    int *  i_ptr;
    size = sizeof(i_ptr);
    // pointer is size 2 on a 16-bit system (if you can find one),
    // 4 on a 32-bit system,
    // and 8 on a 64-bit system,
    printf("Size of pointer is %lu\n", size);
}

void testArrTotal()
{
    int arr[] = { 1, 2, 3, 4};
    int total = 0;
    // loop and sum
    for (int i = 0; i < 4; i++)
        total += (arr[i] % 2 == 1) ? arr[i] : 0;
    printf("Total is %d \n", total);
}


int main()
{
    testArrTotal();
    //showDataSizes();
    //showDataSizes();
    printf("Hello world!\n");
    return 0;
}
