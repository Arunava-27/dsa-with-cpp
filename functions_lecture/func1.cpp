#include <iostream>

using namespace std;

void greet()
{
    cout << "Hello, World!" << endl;
}

int printValueAndGreet(){
    cout << "Hello" << endl;
    return 42;
}

// sum of two numbers
int add(int a, int b){
    return a+b;
}

int main()
{
    greet();
    int value = printValueAndGreet();
    cout << "Returned value: " << value << endl;

    int tot = add(2,7);
    cout << "result -> " << tot << endl;
    return 0;
}