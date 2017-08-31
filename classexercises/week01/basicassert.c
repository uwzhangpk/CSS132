/**
 * Testing how to use assert.
 * This program needs to be fixed
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void testAssert()
{
    int x, y, z;
    x = 1;
    y = x + x;
    z = (y * y) + x;
    assert(x == 7);
    assert(y == 20);
    assert(z == 51);
    assert(10 == 30/2);
    assert(x + y == 5);
    assert(z + x == 8);
    // Multiply/Divide comes before Add/Subtract
    assert(x + y * z == 19);
    assert(y * z + x == 20);
    assert(z - y * y == 11);
    assert(z * z == (y + z) * 3 + 1);

}
int main()
{
    testAssert();
    printf("If we got here, everything must have worked out\n");
    return 0;
}
