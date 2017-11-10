#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
enum state {WORKING=7, FAILED=11, OFF=4};
enum play {DOT = '.', XX = 'X', OO = 'O'};

void testEnum()
{
    enum week day;
    day = Tue;
    int x = Tue;
    printf("Day is %d\n", day);
    printf("x is %d\n", x);

    enum state status;
    status = FAILED;
    printf("status is %d\n", status);

    enum play mark;
    mark = XX;
    printf("mark is %c\n", mark);
}

void printDecimalNumberAsBinary(int number)
{
    // only looking at 8 bits
    for (int i = 7; i >= 0; i--)
    {
        bool bitValue = number & (1 << i);
        int someValue = number & (1 << i);
        printf("i: %d, Bit %d\n", i, bitValue);
        printf("i: %d, int %d\n", i, someValue);
        printf("%d", i, bitValue);
    }
    printf("\n");
}

void testShift()
{
    // we can use shift when looking at binary numbers
    // x = 3 in binary is '0000 0011'
    unsigned int x = 3;
    printf("Unsigned integer x is %d\n", x);
    printf("Unsigned integer x as hex is %#0x\n", x);
    x = x << 1;
    // x in binary is now '0000 0110' which is 6
    printf("* After 1 left shift\n");
    printf("Unsigned integer x is %d\n", x);
    printf("Unsigned integer x as hex is %#0x\n", x);
    x = x << 1;
    // x in binary is now '0000 1100' which is 12
    printf("* After 2 left shifts\n");
    printf("Unsigned integer x is %d\n", x);
    printf("Unsigned integer x as hex is %#0x\n", x);
    x = x << 1;
    // x in binary is now '0001 1000' which is 24
    printf("* After 3 left shifts\n");
    printf("Unsigned integer x is %d\n", x);
    printf("Unsigned integer x as hex is %#0x\n", x);
}

int main()
{
    //testEnum();
    //printDecimalNumberAsBinary(25);
    testShift();
    printf("Hello world!\n");
    return 0;
}
