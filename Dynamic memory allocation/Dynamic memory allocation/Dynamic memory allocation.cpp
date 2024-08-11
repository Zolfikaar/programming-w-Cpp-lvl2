#include <iostream>
using namespace std;

int main()
{
    int* ptr1; // Declare int pointer
    float* ptr2; // Declare float pointer

    // Dynamiclly allocate memory
    ptr1 = new int;
    ptr2 = new float;

    // Assign value to the memory
    *ptr1 = 10;
    *ptr2 = 4.6;

    cout << "Pointer one: " << *ptr1 << endl;
    cout << "Pointer two: " << *ptr2 << endl;

    // deallocate the memory
    delete ptr1;
    delete ptr2;
}
