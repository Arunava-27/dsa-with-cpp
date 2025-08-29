#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 10;
    //// Arithmetic Operators
    int sum = a + b;
    cout << "Arithmetic Operators:" << endl;
    cout << "The sum is: " << sum << endl;
    cout << "The difference is: " << (b - a) << endl;
    cout << "The product is: " << (a * b) << endl;
    cout << "The quotient is: " << (b / a) << endl;
    //* Modulus Operator
    int c = 11;
    cout << "The remainder is: " << (c % a) << endl;
    //! division operator returns 5/2 -> 2 not 2.5 in integer division i.e int/int -> int not float
    //* int/float -> float, int/double -> double and float/double -> double
    cout << "The integer division is: " << (5 / 2) << endl;
    cout << "The integer division is: " << (5 / (double)2) << endl; // type casting
    cout << "The float division is: " << (5.0 / 2) << endl;
    cout << "The double division is: " << (5.0 / 2.0) << endl;

    cout << "\n\n";

    //// Relational Operators
    //* 0 -> false and 1 -> true
    cout << "Relational Operators:" << endl;
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a less than b? " << (a < b) << endl;
    cout << "Is a greater than or equal to b? " << (a >= b) << endl;
    cout << "Is a less than or equal to b? " << (a <= b) << endl;


    cout << "\n\n";

    //// Logical Operators
    cout << "Logical Operators:" << endl;
    cout << "Is a greater than 0 AND b less than 20? " << ((a > 0) && (b < 20)) << endl;
    cout << "Is a greater than 0 OR b less than 5? " << ((a > 0) || (b < 5)) << endl;
    cout << "!(3 > 1) : " << !(3 > 1) << endl; // would return true->1 without the NOT operator

    cout << "\n\n";

    //// Unary Operators
    cout << "Unary Operators:" << endl;
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of ++a is: " << ++a << endl;  // pre-increment
    cout << "The value of --b is: " << --b << endl;  // pre-decrement
    cout << "The value of a++ is: " << a++ << endl;  // post-increment
    cout << "The value of b++ is: " << b++ << endl;  // post-increment
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;

    return 0;
}