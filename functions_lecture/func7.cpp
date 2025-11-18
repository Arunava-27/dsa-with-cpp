#include <iostream>
#include <cmath>

using namespace std;

int sumOfDigits(int number){

    int digitSum = 0;

    while(abs(number) > 0){
        int lastDigit = number % 10;
        digitSum += lastDigit;
        number = number/10;
    }

    return digitSum;
}

// n/10 -> quotient
// n%10 -> remainder

int main()
{
    // calculate sum of digits of a number
    int number = -2220;
    int result = sumOfDigits(number);
    cout << result << endl;

    return 0;
}