#include <iostream>

using namespace std;

//  calculate the sum of numbers from 1 to N
int calSumToN(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
    
}

int main()
{
    int n=10;
    int sum = calSumToN(n);
    cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;

    return 0;
}