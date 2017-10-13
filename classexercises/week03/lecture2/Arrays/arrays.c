#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void printArray(int * someArray, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Element %d is %d\n", i, someArray[i]);
        someArray[i] = someArray[i] + 1;
    }
}

void arrayExample()
{
    int arr[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = arr[0] + arr[1];

    int * arr_ptr;
    // not &x but x, because arr is an array

    arr_ptr = arr;
    assert (arr_ptr[0] == arr[0]);
    assert (arr_ptr[1] == arr[1]);

    // in fact *arr_ptr and arr_ptr[0]
// point to the same location
    assert(*arr_ptr == arr_ptr[0]);

    // how do we get to next memory location in array
    // pointer arithmetic: compiler knows what to do
    assert(*(arr_ptr + 1) == arr_ptr[1]);

    // going through an array
    int array_length = 3;
    for (int i = 0; i < array_length; i++)
    {
        printf("Array element %d is %d\n", i, arr[i]);
    }
    // if we wanted another function to print the array
    printArray(arr, 3);
}



void fillUpSquareArray(int * arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = i * i;
    }
}

void squareArrayExample()
{
    int squareArr[100];
    fillUpSquareArray(squareArr, 100);
    printArray(squareArr, 100);
}


int main()
{
    arrayExample();
    printf("Hello world!\n");
    squareArrayExample();
    return 0;
}
