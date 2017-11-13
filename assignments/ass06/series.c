#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// approximate square root of a number using Newton's method
// https://en.wikipedia.org/wiki/Newton%27s_method
// LOOKUP EXAMPLE for 612 on above URL
// try finding sqare root of 612 (as in above URL)
// first guess is always 10
// for 612, x0 is 10, x1 is 35.6, x2 is 26.3, x3 is 24.79, ...
// Do a minimum of 10 iterations
double squareRoot(double number)
{
    double currentX = 10.0;
    // TODO

    return currentX;
}

// Generate random numbers between 0 and 1000
// Call squareRoot to calculate using Newton's method
// Call sqrt from math.h
// print the square roots you got and their difference to 12 decimal places
void squareRootTester(int testTimes)
{
    printf("Testing squareRoot %d times\n", testTimes);
    for (int i = 0; i < testTimes; i++)
    {
        // TODO
    }
}

// Calculate the sum of an alternating series
// https://en.wikipedia.org/wiki/1/2_%E2%88%92_1/4_%2B_1/8_%E2%88%92_1/16_%2B_%E2%8B%AF
// 1/2 - 1/4 + 1/8 - 1/16 + 1/32
// For sequenceLength 1, we get 1/2
// For sequenceLength 2, we get 1/2 - 1/4
// and so on
double sumOfGeometricSeries(int sequenceLength)
{
    double sum = 0;
    // TODO
    return sum;
}

// Calculates the infinite series using sumOfGeometricSeries
// Tries out sequenceLength from 1 to 10
// print the result returned from sumOfGeometricSeries and the difference to 1.0/3.0 to 12 decimal places
void sumOfGeometricSeriesTester()
{
    printf("Testing sumOfGeometricSeries\n");
    // TODO
}


// TODO -- Bonus points only
double calculateEulerNumber()
{
    return 0;
}

int main()
{
    squareRootTester(10);
    sumOfGeometricSeriesTester();
    return 0;
}
