#include <vector>
#include <iostream>

using namespace std;

int main()
{
    // std::vector <Type> vector_name
    vector <int> Numbers = { 1,2,3,4,5,6 };
    cout << "Vector Numbers: \n";
    // using referrence here for make the loop faster by using element's memory address, instead of copying the whole data from the vector.
    for (int &num : Numbers)
        cout << num << endl;
}

