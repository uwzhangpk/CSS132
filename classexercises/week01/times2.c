#include <stdio.h>
#include <stdlib.h>

int times2(int x)
{
   int x2;
   x2 = x * 2;
   return x2;
}

int main()
{
   int i, result;
   i = 2;
   result = times2(i);
   printf("2 times %d is %d\n", i, result);
   return 0;
}
