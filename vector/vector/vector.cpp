#include <vector>
#include <iostream>

using namespace std;

struct stEmployees {
    string firstName;
    string lastName;
    float salary;
};

void EnterEmployeeInfo(vector <stEmployees> & vEmployee)
{
    char EnterNewEmployee = 'Y';
    
    stEmployees tempEmployee;

    cout << "Please Enter Employee Info:\n";

    while (EnterNewEmployee == 'Y' || EnterNewEmployee == 'y') {

        cout << "Employee First Name: ";
        cin >> tempEmployee.firstName;

        cout << "Employee Last Name: ";
        cin >> tempEmployee.lastName;

        cout << "Employee Salary: ";
        cin >> tempEmployee.salary;


        vEmployee.push_back(tempEmployee);


        cout << "Do you want to add another employee? Y/N" << endl;
        cin >> EnterNewEmployee;

    }
    
}

void PrintEmployeesInfo(vector <stEmployees> & vEmployee)
{
    cout << "Vector of Structure of Employees:\n";
    cout << "==================================\n";
    for (stEmployees & employee : vEmployee) {
        cout << "----------------------------------\n";
        cout << "First Name : " << employee.firstName << endl;
        cout << "Last Name  : " << employee.lastName << endl;
        cout << "Salary     : " << employee.salary << endl;
        cout << "----------------------------------\n";
    }
    cout << "==================================\n";
}

int main()
{
    vector <stEmployees> vEmployee;

    EnterEmployeeInfo(vEmployee);

    PrintEmployeesInfo(vEmployee);

}