#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter range : ";
    cin >> n;

    // while loop
    int count = 1;

    while (count <= n)
    {
        cout << count << " ";
        count++;

    }
    cout << endl;

    return 0;
}