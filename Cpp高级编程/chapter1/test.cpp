
/************************************************
#
#      Filename: test.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-24 21:01:55
# Last Modified: 2020-05-24 22:08:12
#***********************************************/
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>


struct Employee
{
    char first_initial;
    char last_initial;
    int employee_number;
    int salary;
};
int main(int argc, char *argv[])
{
    Employee an_employee;
    an_employee.first_initial = 'a';
    an_employee.last_initial = 'z';
    an_employee.employee_number = 123;
    an_employee.salary = 1000;
    return 0;
}
