#include <stdio.h>
#include <stdlib.h>

int sumUsingFor(int n)
{
    int sum = 0;
	for (int i = 0; i <= n; i++)
	{
        printf("i is %d\n", i);
        sum = sum + i;
        printf("sum is now %d\n", sum);
	}
	return sum;
}

int main()
{
    int sum = sumUsingFor(5);
    printf("Sum is %d\n", sum);
    return 0;
}
