
/************************************************
#
#      Filename: EmployeeTest.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-25 20:37:13
# Last Modified: 2020-05-25 20:41:02
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "employee.h"
using namespace std;
using namespace Records;

int main(int argc, char *argv[])
{
    cout << "Testing the Employee class." << endl;
    Employee emp;
    emp.SetFirstName("Allen");
    emp.SetLastName("Doe");
    emp.SetEmployeeNumber(123);
    emp.SetSalary(50000);
    emp.Promote();
    emp.Promote(50);
    emp.Hire();
    emp.Display();
    return 0;
}
