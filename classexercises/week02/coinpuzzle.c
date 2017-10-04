#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int getCoins(int n)
{
    int c = 0;
    c = c + (n / 25);
    n = n % 25;

    c = c + (n / 10);
    n = n % 10;

    c = c + (n / 5);
    n = n % 5;

    c = c + n;
    return c;
}

int main()
{
    int sack = 115;
    int coins = getCoins(sack);
    printf("For sack size %d, we get %d coins\n", sack, coins);

    assert(getCoins(100) == 4);
    assert(getCoins(115) == 6);
    assert(getCoins(38) == 5);
    assert(getCoins(0) != 0);

    return 0;
}
