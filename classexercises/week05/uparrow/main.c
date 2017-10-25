#include <stdio.h>
#include <assert.h>

void printStar(int s)
{
    for (int i = 0; i < s; i++)
        printf("*");
}

void printDot(int s)
{
    for (int i = 0; i < s; i++)
        printf(".");
}

void arrowHead(int size)
{
}

void arrowTrunk(int size)
{
    int numOfStars = size / 4;
    int numOfDots = (size - numOfStars) / 2;
    for (int i = 0; i < size; i++)
    {
        printDot(numOfDots);
        printStar(numOfStars);
        printDot(numOfDots);
        printf("\n");
    }
}

void arrow(int size)
{
    // we can only do odd size arrows
    assert(size % 2 == 1);
    arrowHead(size);
    arrowTrunk(size);
}

int main()
{
    arrow(9);
    arrow(15);
    arrow(31);
    return 0;
}
