#include <iostream>

using namespace std;

int main()
{
    //// square pattern with numbers
    /*
    // @ Example
    // for n=3
    // A B C
    // D E F
    // G H I
     */

    int n;
    cout << "Enter Range : ";
    cin >> n;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}