#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    // pass by value
    int x = 18, y = 27;

    int result = sum(x, y);

    cout << "X = " << x << " Y = " << y << endl;
    cout << result;

    return 0;
}