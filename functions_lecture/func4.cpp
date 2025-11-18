#include <iostream>

using namespace std;

// Calculate N factorial
//  N! = 1*2*3*..............*N
int calFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    cout << calFactorial(0);

    return 0;
}