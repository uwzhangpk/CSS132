#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    if (x = 20)
    {
        printf("The expression x=20 evaluated to true, x is : %d\n", x);
    }
    printf("After first if x is : %d\n", x);
    if (x = 0)
    {
        printf("The expression x=0 evaluated to true, x is : %d\n", x);
    }
    printf("At end x is : %d\n", x);
    return 0;
}
