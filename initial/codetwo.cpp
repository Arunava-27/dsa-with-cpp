#include <iostream>

using namespace std;

int main()
{
    //* type conversion (implicit)
    //* small data type -> big data type
    char grade = 'A';
    int value = grade; //// 65 ASCII VALUE

    cout << value << endl;

    //* type casting (explicit)
    //* big data type -> small data type
    double price = 100.99;
    int newPrice = (int)price;

    cout << newPrice << endl;

    return 0;
}