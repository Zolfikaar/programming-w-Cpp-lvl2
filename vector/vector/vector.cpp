#include <vector>
#include <iostream>

using namespace std;

void ReadNumber(vector <int> & vNumbers)
{
    char EnterNewNumber = 'Y';
    int Number;

    while (EnterNewNumber == 'Y' || EnterNewNumber == 'y') {
        cout << "Please Enter a Number:\n";
        cin >> Number;

        vNumbers.push_back(Number);

        cout << "Do you want to add another number? Y/N" << endl;
        cin >> EnterNewNumber;
    }

    
}

void PrintvNumbers(vector <int> & vNumbers)
{
    cout << "items in vector: \n";
    for (int num : vNumbers)
        cout << num << endl;
}

int main()
{
    vector <int> vNumbers;
    ReadNumber(vNumbers);

    PrintvNumbers(vNumbers);

}