#include<iostream>

using namespace std;

int main(){
    int age = 22;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = false;
    double num = 100.99;

    cout << "Integer : " << age << endl;
    cout << "Character : " << grade << endl;
    cout << "float/floatiing : " << PI << endl;
    cout << "Boolean : " << isSafe << endl; //// true -> 1 & false -> 0
    cout << "Double : " << num << endl;

    cout << "\n\n\n";

    cout << "Integer Size : " << sizeof(age) << endl;
    cout << "Character Size : " << sizeof(grade) << endl;
    cout << "float/floatiing : " << sizeof(PI) << endl;
    cout << "Boolean : " << sizeof(isSafe) << endl;
    cout << "Double : " << sizeof(num) << endl;


    return 0;
}