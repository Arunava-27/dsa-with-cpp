#include <iostream>

using namespace std;

int main()
{
    // n=4
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4

    int n;
    cout << "Enter Range : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // // spaces
        for (int k = 1; k <= i; k++) //// ith number of spaces
        {
            cout << " ";
        }

        // // numbers
        for (int j = n; j >= i; j--)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}