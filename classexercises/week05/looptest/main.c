#include <stdio.h>
#include <stdlib.h>

int arrayStats(int * arr, int length)
{
    if (arr == NULL || length == 0)
        return -1;
    int max, min, range;
    int total;
    double average;
    max = arr[0];
    min = arr[0];
    total = 0;
    for(int i = 0; i < length; i++)
    {
        //printf("%d\n", arr[i]);
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        total = total + arr[i];
    }
    range = max - min;
    average = (double)total / length;
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Range: %d\n", range);
    printf("Average %f\n", average);
    return 0;
}

void myMultiplication()
{
    int num1;
    int num2;
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        for (int j = i; j <= num2; j++)
        {
            printf("%d * %d is %d\n", i, j, i * j);
        }
    }
}
int main()
{
    int sampleArray[] = {4, 37, 19, 13};
    int returnValue = arrayStats(sampleArray, 4);
    printf("Returned %d\n", returnValue);
    //myMultiplication();
    printf("Hello world!\n");
    return 0;
}
