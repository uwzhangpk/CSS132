 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, j;
   int * x;
   //x = &i;
   i = 10;
   j = 20;
   //x = 1004;
   printf("i = %d, j = %d, *x = %d\n",
          i, j, &j);
   return 0;
}
