#include <stdio.h>
#include <stdlib.h>

void times2(int x, int * x2)
{
   *x2 = x * 2;
}

int main()
{
   int i, result;
   i = 2;
   times2(i, &result);
   printf("2 times %d is %d\n", i, result);
   return 0;
}
