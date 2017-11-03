#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void someFunction()
{
    printf("Start\n");

    printf("End\n");
}

void fileReadTester()
{
    printf("Reading from file main.c\n");
    FILE * inf = fopen("main.c", "r");
    assert(inf != NULL);
    char line[200];
    int count = 1;
    int numberOfItemsRead = fscanf(inf, " %[^\r\n]", line);
    while (numberOfItemsRead == 1)
    {
        printf("%d: %s\n", count, line);
        count++;
        numberOfItemsRead = fscanf(inf, " %[^\r\n]", line);
    }
    fclose(inf);
}

void fileWriteTester()
{
    printf("Writing to file myoutput.txt\n");
    FILE * outf = fopen("myoutput.txt", "w");
    fprintf(outf, "Adventures in writing to a file\n");
    for (int i = 0; i < 10; i++)
        fprintf(outf, "Counting %d \n", i);
    fclose(outf);
}
void spellItOut(char msg[])     // same as char * msg
{
    int count = 0;
    while (msg[count])
    {
        printf("%d: %c ", count, msg[count]);
        count++;
    }
    printf("\n");
}

void stringTester()
{
    char stringA[] = "hello";			  // can modify characters
    char stringB[50] = "world";         // extra capacity!
    char * stringC = "fun";			 // cannot modify characters
    char stringD[] = {'c', 'o', 'm', 'p', 'l', 'e', 'x', '\0'};
    printf("%s %s %s %s \n",
           stringA, stringB, stringC, stringD);

    char * allStrings[] = { stringA, stringB, stringC, stringD };
    for (int i = 0; i < 4; i++)
        spellItOut(allStrings[i]);
}



int main1()
{
    stringTester();
    //fileWriteTester();
    //fileReadTester();
    printf("Hello world!\n");
    return 0;
}

int main(int argc, char * argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("argc[%d] is %s\n", i, argv[i]);
    }
    return 0;
}
