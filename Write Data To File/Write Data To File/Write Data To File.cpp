#include <iostream>
#include <fstream> // file system library
using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("textFile.txt", ios::out); // activate write mode

    if (MyFile.is_open()) {
        MyFile << "Text line one\n";
        MyFile << "Text line two\n";
        MyFile << "Text line three\n";

        MyFile.close(); // deactivate write mode
    }

    return 0;
}