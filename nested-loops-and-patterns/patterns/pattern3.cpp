#include <iostream>

using namespace std;

int main()
{
    //// square pattern with numbers
    /*
    // @ Example
    // for n=3
    // 1 2 3
    // 4 5 6
    // 7 8 9
     */

    int n;
    cout << "Enter Range : ";
    cin >> n;

    int num = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}