#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter your character : ";
    cin >> ch;
    int asc = ch;

    if (asc >= 65 && asc <= 90)
    {
        cout << ch << " is an UpperCase Character.";
    }
    else if (asc >= 97 && asc <= 122)
    {
        cout << ch << " is a LowerCase Character.";
    }
    else
    {
        cout << ch << " is an invalid input.";
    }

    return 0;
}
