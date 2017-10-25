#include <stdio.h>
#include <stdlib.h>

int triangleTest(int side1, int side2, int hypot)
{
    return side1 * side1 + side2 * side2 == hypot * hypot;
}

void triangleCounter()
{
    int max = 1000;
    int count = 0;
    for (int a = 1; a <= max; a++)
    {
        for (int b = a; b <= max; b++)
        {
            for (int c = b; c <= max; c++)
            {
                if (triangleTest(a, b, c))
                {
                    count++;
                    // printf("Found %d %d %d\n", a, b, c);
                }
            }
        }
    }
    printf("Found %d triangles\n",count);
}
int main()
{
    printf("test 3 4 5 %d\n", triangleTest(3, 4, 5));
    printf("test 4 4 5 %d\n", triangleTest(4, 4, 5));
    if (triangleTest(6, 8, 10))
    {
        printf("Found 6-8-20 to be true\n");
    }
    triangleCounter();
    return 0;
}
