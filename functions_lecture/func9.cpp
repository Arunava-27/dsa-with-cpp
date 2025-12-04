#include <iostream>
#include <iomanip>

using namespace std;

// check if a number in prime or not.
bool checkPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}


int main(){
    int n;
    cin >> n;
    bool result = checkPrime(n);
    cout << boolalpha << result;
    return 0;
}