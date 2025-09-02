#include <iostream>

using namespace std;

int main()
{
    //* sum of odd numbers from 1 to n
    int n;
    cout << "Enter Range : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            
            sum += i;
        }
    }

    cout << "\nSum of Odd Numbers from 1 to n => " << sum << endl;

    return 0;
}