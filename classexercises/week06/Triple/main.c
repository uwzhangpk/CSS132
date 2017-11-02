#include <stdio.h>
#include <stdlib.h>

void tripleIt(int number)
{
    printf("number in tripleIt before is %d\n", number);
    number = number * 3;
    printf("number in tripleIt after is %d\n", number);
}

int tripleItWithReturnValue(int number)
{
    printf("number in tripleIt before is %d\n", number);
    number = number * 3;
    printf("number in tripleIt after is %d\n", number);
    return number;
}

void tripleItWithPointer(int * number)
{
    printf("number in tripleIt before is %d\n", *number);
    *number = *number * 3;
    printf("number in tripleIt after is %d\n", *number);
}

void testPointers()
{
    int x = 15;
    int * x_ptr = &x;

    printf("x before is %d\n", x);
    tripleItWithPointer(x_ptr);
    printf("x after is %d\n", x);
    //printf("y is %d\n", y);
    *x_ptr = *x_ptr + 5;
    printf("x after *x_ptr is increased by 5 is %d\n", x);
    printf("*x_ptr after *x_ptr is increased by 5 is %d\n", *x_ptr);
    x = x + 10;
    printf("x after x is increased by 10 is %d\n", x);
    printf("*x_ptr after x is increased by 10 is %d\n", *x_ptr);

    x = *x_ptr + 100;
    // *x_ptr = x + 100;
    printf("x after x is increased by 100 is %d\n", x);
    printf("*x_ptr after x is increased by 100 is %d\n", *x_ptr);
}

// int printArray(int * someArray, int length)
void printArray(int someArray[], int someLength)
{
    for (int i = 0; i < someLength; i++)
    {
        printf("In printArray -- element at index %d has value %d\n", i, someArray[i]);
    }
}

void printArray2(int * someArray, int someLength)
{
    for (int i = 0; i < someLength; i++)
    {
        printf("In printArray2 -- element at index %d has value %d\n", i, someArray[i]);
    }
}
int main()
{
    // testPointers();
    int students[] = { 123, 456, 7, 99};
    int length = 4;
    printf("The first element of students is at index 0, its value is %d\n", students[0]);
    for (int i = 0; i < length; i++)
    {
        printf("Array element at index %d has value %d\n", i, students[i]);
    }
    printArray(students, length);
    printArray2(students, length);

    int * arr_ptr = students;
    printf("* arr_ptr is %d\n", *arr_ptr);
    arr_ptr++;
    printf("* arr_ptr after using ++ is %d\n", *arr_ptr);

    *arr_ptr = 73;
    printArray(students, length);
    return 0;
}
