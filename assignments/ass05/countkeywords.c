#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// prints all the keywords and how many times they were seen in a file
void printKeywordStats(char * keywords[], int keywordStats[], int keywordLength)
{
    // TODO: Print the keywords followed by how many times they appear
}

// counts how many times each keyword appears in the given filename
// When the keyword is found, the corresponding entry in keywordStats is increased
// return -1 if file cannot be opened, 0 otherwise
// to read a whole line, use fscanf(inputFilePtr, " %[^\r\n]", line);
// to check if a word appears in a line use strstr
// See https://www.tutorialspoint.com/c_standard_library/c_function_strstr.htm
int countKeywords(char * filename, char * keywords[], int keywordStats[], int keywordLength)
{
    // TODO
    return -1;
}

// writes the numbers 0 to 9 to the given file
void fileWriteTester(char * filename)
{
    printf("Writing to file %s\n", filename);
    // TODO
}

int main(int argc, char * argv[])
{
    // Write the numbers 0 to 9 to myoutput.txt
    // Find where this file is on your hard drive
    // so you can specify the file to read with the full pathname
    fileWriteTester("myoutput.txt");
    char * keywords[] = { "void ", "int ", "double ", "char " };
    int keywordStats[] = { 0, 0, 0, 0 };
    int keywordLength = 4;
    //
    // TODO: fileToRead so the program gets the file name from argv instead
    //
    char * fileToRead = "somefile.c";
    int err = countKeywords(fileToRead, keywords, keywordStats, keywordLength);
    if (err == -1)
    {
        printf("Failed to read file: %s\n", fileToRead);
        printf("Press any key to exit\n");
        char c;
        scanf("%c", &c);
        return -1;
    }
    printKeywordStats(keywords, keywordStats, keywordLength);
    printf("Press any key to exit\n");
    char c;
    scanf("%c", &c);
    return 0;
}
