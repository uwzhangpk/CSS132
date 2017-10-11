#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

const int MAXINT = 2000;

int oddNumbersUptoNv1(int n)
{
    printf("oddNumbersUptoN called with %d\n", n);
    for (int i = 1; i <= n; i +=2)
    {
        printf("%d ", i);
    }
    return 0;
}

int oddNumbersUptoNv2(int n)
{
    printf("oddNumbersUptoN called with %d\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            printf("%d ", i);
    }
    return 0;
}

bool isOdd(int num)
{
    return num % 2 == 1;
}

bool multipleof3(int num)
{
    return num % 3 == 0;
}

bool multipleof7(int num)
{
    return num % 7 == 0;
}

int oddNumbersUptoN(int n)
{
    //printf("MAXINT is %d\n", MAXINT);
    printf("oddNumbersUptoN called with %d\n", n);
    for (int i = 1; i <= n; i++)
        if (isOdd(i))
            printf("%d ", i);
    return 0;
}

int sumOfoddNumbersUptoN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        if (isOdd(i))
            sum = sum + i;
    printf("sumOfoddNumbersUptoN for %d returning %d",
           n, sum);
    return sum;
}


int largestOddBeforeNv1(int n)
{
    assert(n > 1);
    if (isOdd(n))
        return n - 2;
    else
        return n - 1;
}

int largestOddBeforeN(int n)
{
    assert(n > 1);
    int largest = 0;
    for(int i = 0; i < n; i++)
    {
        if (isOdd(i) && (i > largest))
            largest = i;
    }
    return largest;
}

// change it to return success/failure
// and take a second parameter to modify
int multipleof3and7BeforeN(int n)
{
    assert(n > 1);
    int largest = 0;
    for(int i = 0; i < n; i++)
    {
        if (multipleof3(i) &&
            multipleof7(i) &&
            (i > largest))
            largest = i;
    }
    return largest;
}

void infiniteForLoop()
{
    for (;;)
    {
        int i;
        printf(".");
        printf("Enter an integer (-1 to quit): ");
        int numberOfItemsRead = scanf("%d", &i);
        assert(numberOfItemsRead == 1);
        if (i == -1)
            return;
        printf("Got %d from user\n", i);

    }
}
int main()
{

    // infiniteForLoop();
    //oddNumbersUptoN(15);
    // sumOfoddNumbersUptoN(10);
    printf("LargestOmultipleof3ddBeforeN returns: %d\n",
           largestOddBeforeN(10));
    printf("multipleof3and7BeforeN returns %d\n",
           multipleof3and7BeforeN(10));
    printf("Hello world!\n");
    return 0;
}
