#include <iostream>
#include "myLib.h" // using double qute for local libraries only.

using namespace std;
//using namespace myLib;

int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number: \n";
    cin >> Number;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // to ignor the rest of the input line untill its find the escape characher '\n'.
        cout << "Invalid Number, Please Enter a valid one: \n";
        cin >> Number;
    }
    return Number;
}

int main()
{
    // create and use custom library
   /* myLib::test();
    int sum = myLib::sumTwoNumbers(2, 3);
    cout << sum;*/

    // ranged loop
   /* string name = "Alison";
    for (char L : name)
        cout << L << endl;*/

    // validate number only

    cout << "Your Number is: " << ReadNumber();
}
