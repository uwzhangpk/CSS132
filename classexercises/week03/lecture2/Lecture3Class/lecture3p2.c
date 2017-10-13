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
    printf("1 factorial gives us %d\n", fact(1));
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
