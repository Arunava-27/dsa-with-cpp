#include <iostream>

using namespace std;

int main()
{

    // n=4
                // 1
            // 1   2   1
        // 1   2   3   2   1
    // 1   2   3   4   3   2   1

    
    int n;
    cout << "Enter Range : ";
    cin >> n;

    int m = n;
    for (int i = 0; i < n; i++)
    {

        // // spaces
        for (int j = 1; j <= m; j++)
        {
            cout << " ";
        }
        m--; //* spaces count

        // // nums set 1
        for (int k = 1; k < i + 1; k++)
        {
            cout << k;
        }

        // // nums set 2
        for (int l = i + 1; l > 0; l--)
        {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}