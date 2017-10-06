#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int getLargestNumber(int a, int b, int c)
{
    if (a > b)
        if (a > c)
            return a;
        else
            return c;
    else
        if (b > c)
            return b;
        else
            return c;
    // if we got here things are bad
    assert(0 == 1);
}
int main()
{
    int max = getLargestNumber(70, 40, 40);
    printf("Max is %d\n", max);
    assert(getLargestNumber(5, 2, 2) == 5);
    assert(getLargestNumber(2, 7, 2) == 7);
    assert(getLargestNumber(2, 2, 9)== 9);
    assert(getLargestNumber(5, 22, 22) == 22);
    assert(getLargestNumber(22, 7, 22) == 22);
    assert(getLargestNumber(22, 22, 9)== 22);
    assert(getLargestNumber(-3, 29, -200)== 29);
    return 0;
}
