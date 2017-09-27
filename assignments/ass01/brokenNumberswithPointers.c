#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Write 3 functions
 * sum2, diff2 and product2
 * to make the following program work.
 *
 * You are not allowed to modify compareNumbers 
 *
 */

void compareNumbers ()
{
    int firstNum = 5;
    int secondNum = 2;
    int * ff;
    ff = &firstNum;
    int dif;
    int sum = sum2(ff, secondNum);
    diff2(ff, &secondNum, &dif);
    int prod = product2(*ff, &secondNum);
    assert(sum == 7);
    assert(dif == 3);
    assert(prod == 10);
}


int main()
{
    compareNumbers();
    printf("If we got here, all is well!\n");
    return 0;
}
