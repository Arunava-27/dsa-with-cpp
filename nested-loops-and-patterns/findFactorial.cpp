#include <iostream>

using namespace std;

int main()
{

    //// Print factorial of a number N

    int n;
    cout << "Enter Range : ";
    cin >> n;

    int factorial = 1;
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        if (n == 0)
        {
            cout << "Factorial of 0 is => " << factorial;
            break;
        }
        factorial *= fact;
        fact++;
        
    }

    cout << factorial;
    

    return 0;
}