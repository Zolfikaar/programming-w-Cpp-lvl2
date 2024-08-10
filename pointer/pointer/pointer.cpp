#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "Value of a: " << a << endl;
    cout << "address of a: " << &a << endl;

    int* p = &a;

    cout << "Value of p: " << p << endl;
    cout << "address of p: " << &p << endl;
    cout << "original value of p(a): " << *p << endl; // Dereferencing Pointer
    cout << "=========================" << endl;
    *p = 20;

    cout << "original value of p(a): " << *p << endl;
    cout << "Value of a: " << a << endl;

    *p = 30;

    cout << "=========================" << endl;

    cout << "original value of p(a): " << *p << endl;
    cout << "Value of a: " << a << endl;
}

