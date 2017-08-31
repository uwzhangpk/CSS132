#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, j;
   int * x;
   x = &i;     
   i = 10;
   j = 20;
   printf("i=%d, j=%d, *x=%d\n", i, j, *x);
   return 0;
}
