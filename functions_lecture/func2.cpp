#include <iostream>

using namespace std;

//  min of two values
int minOfTwo(int a, int b){ // function with parameters
    return a>b ? b : a;
}

int main()
{
    cout << minOfTwo(7, 6); // arguments passed to the function

    return 0;
}