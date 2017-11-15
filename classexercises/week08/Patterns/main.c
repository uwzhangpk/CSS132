#include <stdio.h>
#include <stdlib.h>

void printStars(int number)
{
    for (int i = 0; i < number; i++)
        printf("*");
}

void printBlanks(int number)
{
    for (int i = 0; i < number; i++)
        printf(" ");
}

void printCross(int size)
{
    int blanks = size / 2;
    int numberOfLines = size / 2;
    for (int i = 0; i < numberOfLines; i++)
    {
        printBlanks(blanks);
        printStars(1);
        printf("\n");
    }
    printStars(size);
    printf("\n");
    for (int i = 0; i < numberOfLines; i++)
    {
        printBlanks(blanks);
        printStars(1);
        printf("\n");
    }
}

void printCross2Helper(int size)
{
    int blanks = size / 2;
    int numberOfLines = size / 2;
    for (int i = 0; i < numberOfLines; i++)
    {
        printBlanks(blanks);
        printStars(1);
        printf("\n");
    }
}
void printCross2(int size)
{
    printCross2Helper(size);
    printStars(size);
    printf("\n");
    printCross2Helper(size);
}
int main()
{
    printCross2(5);
    printf("Hello world!\n");
    return 0;
}
