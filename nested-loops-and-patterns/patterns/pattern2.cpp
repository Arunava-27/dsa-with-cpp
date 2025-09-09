#include <iostream>

using namespace std;

int main()
{
    //// square pattern with Alphabets
    /*
    // @ Example
    // for n=4
    // A B C D
    // A B C D
    // A B C D
    // A B C D    
     */

     int n;
     cout << "Enter Range : ";
     cin >> n;

     int range = 65+n;

     for (int i = 1; i <= n; i++)
    {
        for (int j = 65; j < range; j++)
        {
            cout << (char)j << " ";
        }

        cout << endl;
    }

    return 0;
}