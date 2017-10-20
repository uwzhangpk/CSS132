#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shout(char * message, int length)
{
    for (int i = 0; i < length; i++)
    {
        if ((message[i] >= 'a') && (message[i] <= 'z'))
        {
            // 'a' - 'A' is 32
            char capital = message[i] - ('a' - 'A');
            // char capital = message[i] - 32;
            printf("%c", capital);
            //message[i] = capital;
        }
        else
        {
            printf("%c", message[i]);
        }

    }
}

void printChar(char * someString, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("char %d is %c\n", i, someString[i]);
        printf("char %d as int is %d\n", i, someString[i]);
    }
}

void charExample()
{
    char str[] = "Hello";
    printf("We have: %s\n", str);
    // print str
    printChar(str, 5);
    // print str and terminator
    printf("Printing more than string length\n");
    // print str and garbage
    printChar(str, 2000);
}



int main()
{
    //charExample();
    char msg[] = "hello";
    shout(msg, 5);
    printf("main: %s\n", msg);
    shout("hello world ! this , is ? a > good { day", 41);
    int len = strlen("hello world ! this , is ? a > good { day");
    printf("Length of long string is %d\n", len);
    return 0;
}


