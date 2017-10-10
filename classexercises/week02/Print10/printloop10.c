#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    bool isRaining = true;
    for (int i = 0; (i < 10) && isRaining; i++)
    {
        printf("%d. Hello World\n", i);
    }
    return 0;
}
