#include <iostream>

using namespace std;

int calFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int binomialCoefficient(int n, int r)
{
    // nCr
    return calFactorial(n) / (calFactorial(r) * (calFactorial(n - r)));
}

int main()
{
    // calculate nCr binomial coefficient for n & r
    int n = 6, r = 3;
    int result = binomialCoefficient(n, r);
    cout << result;

    return 0;
}