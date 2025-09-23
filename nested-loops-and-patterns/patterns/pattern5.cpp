#include <iostream>

using namespace std;

int main()
{
    // n = 4
    // *
    // * *
    // * * *
    // * * * *
    
    int n;
    cout << "Enter Range : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    

    return 0;
}