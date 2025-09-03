#include <iostream>

using namespace std;

int main()
{

    //// sum of all numbers from 1 to N divisible by 3.

    int n;
    cout << "Enter Range : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%3 == 0)
        {
            cout << " " << i;
            sum += i;
        }
        
    }

    cout << "\nSum of all numbers from 1 to " << n << " divisible by 3 => " << sum;

    return 0;
}