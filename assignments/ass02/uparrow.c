#include <stdio.h>
#include <assert.h>

void printStar(int s)
{
}

void printDot(int s)
{
}

void arrowHead(int size)
{
}

void arrowTrunk(int size)
{
}

void arrow(int size)
{
   // we can only do odd size arrows
   assert(size % 2 == 1);
   arrowHead(size);
   arrowTrunk(size);
}

int main()
{
   arrow(9);
   arrow(15);
   arrow(31);
   return 0;
}
