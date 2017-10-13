#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int fib(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n-2) + fib(n-1);
    }
}

int main()
{
    printf("1 sum gives us %d\n", sum(1));
    printf("5 sum gives us %d\n", sum(5));
    privoid arrayExample()
{
    int arr[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = arr[0] + arr[1];

    int * arr_ptr;
    // not &x but x, because arr is an array

    arr_ptr = arr;
    assert (arr_ptr[0] == arr[0]);
    assert (arr_ptr[1] == arr[1]);

    // in fact *arr_ptr and arr_ptr[0]
 // point to the same location
    assert(*arr_ptr == arr_ptr[0]);

ntf("1 factorial gives us %d\n", fact(1));
    printf("5 factorial gives us %d\n", fact(5));

    printf("1 fibonacci gives us %d\n", fib(1));
    printf("2 fibonacci gives us %d\n", fib(2));
    printf("3 fibonacci gives us %d\n", fib(3));
    printf("5 fibonacci gives us %d\n", fib(5));
    printf("8 fibonacci gives us %d\n", fib(8));
    // printf("0 gives us %d\n", sum(0));
    printf("Hello world!\n");
    return 0;
}
