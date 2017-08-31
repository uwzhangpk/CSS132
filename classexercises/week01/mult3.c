/**
 * Multiply 3 numbers and print the result
 */
 
#include <stdio.h>
#include <stdlib.h>

int mult3(int x, int y, int z)
{
   int m = x * y * z;
   return m;
}

int main()
{
   int i, j, k, result;
   i = 2;
   j = 3;
   k = 5;
   result = mult3(i, j, k);
   printf("Multiplying %d %d %d gives %d\n", i, j, k, result);
   return 0;
}
