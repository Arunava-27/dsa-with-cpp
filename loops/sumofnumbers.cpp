#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter range : ";
    cin >> n;

    //* sum of numbers from 1 to n
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }

    cout << "Sum of numbers from 1 to " << n << " : " << sum << endl;

    return 0;
}