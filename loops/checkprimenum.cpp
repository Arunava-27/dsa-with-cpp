#include <iostream>

using namespace std;

int main()
{
    //// check if a number is prime or not.

    int n;
    cout << "Enter a number to check for Prime number : ";
    cin >> n;

    bool isPrime = true;
    for(int i = 2; i < n; i++){
        if (n%i == 0)
        {
            isPrime = false;
            break;
        }
        
    }

    if (isPrime == false)
    {
        cout << n << " is not Prime.";
    } else {
        cout << n << " is Prime.";
    }
    

    return 0;
}