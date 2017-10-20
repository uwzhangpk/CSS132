#include <stdio.h>
#include <stdlib.h>


void comment(int grade)
{
    if (grade > 90)
    {
        printf("Wow");
        printf("value of grade is %d", grade);
    }
    else if (grade > 75)
        printf("Not bad");
    else
        printf("OK");
}

double getPrice(int ctype, int csize)
{
    if (ctype == 1)
        if (csize == 1)
            return 7.50;
        else
            return 10.20;
    return -10.0;
}

void printNumsBackwards(int n)
{
    if (n <= 0)
    {
        // do nothing
    }
    else
    {
        printf("%d ", n);
        printNumsBackwards(n-1);

    }
}

int main()
{
    printNumsBackwards(5);
    return -1;
    printf("Give me a number: ");
    char * stopM = "stop";
    char stopMess[] = {'s', 't', 'o', 'p', '\0'};
    int userInput;
    int userInput2;
    int read = scanf("%d %d", &userInput, &userInput2);
    // printf("read is %d\n", read);
    // assert(read == 2);
    if (read == 2)
    {
        printf("userInput is %d\n", userInput);
        printf("userInput2 is %d\n", userInput2);
    }
    else
    {
        printf("IMPROPER input\n");
        return -1;

    }
    return 0;
}
