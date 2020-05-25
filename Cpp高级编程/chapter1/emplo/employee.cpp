
/************************************************
#
#      Filename: employee.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-25 20:16:10
# Last Modified: 2020-05-25 20:48:08
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "employee.h"
using namespace std;
namespace Records
{
    Employee::Employee():first_name_(""), last_name_(""), employee_number_(-1),
                         salary_(kDefaultStartingSalary),hired_(false){}

    void Employee::Promote(int raise_amout)
    {
        SetSalary(GetSalary() + raise_amout);
    }

    void Employee::Demote(int demerit_amout)
    {
        SetSalary(GetSalary() - demerit_amout);
    }

    void Employee::Hire()    // Hires or rehires the Employee
    {
        hired_ = true;
    }

    void Employee::Fire()    // Dismisses the employee
    {
        hired_ = false;
    }

    void Employee::Display() const   // Outputs employee info to console
    {
        cout << "Employee: " << GetLastName() << ", " << GetFirstNmae() << endl;
        cout << "--------------------------" << endl;
        cout << (hired_ ? "Current Employee" : "Former Employee") << endl;
        cout << "Employee Number: " << GetEmployeeNumber() << endl;
        cout << "Salary: $" << GetSalary() << endl;
        cout << endl;
    }

    void Employee::SetFirstName(const std::string& first_name)
    {
        first_name_ = first_name;
    }
    const std::string& Employee::GetFirstNmae() const
    {
        return first_name_;
    }

    void Employee::SetLastName(const std::string& last_name)
    {
        last_name_ = last_name;
    }
    const std::string& Employee::GetLastName() const
    {
        return last_name_;
    }

    void Employee::SetEmployeeNumber(int employee_number)
    {
        employee_number_ = employee_number;
    }
    int Employee::GetEmployeeNumber() const
    {
        return employee_number_;
    }

    void Employee::SetSalary(int new_salary)
    {
        salary_ = new_salary;
    }
    int Employee::GetSalary() const
    {
        return salary_;
    }

    bool Employee::GetIsHired() const
    {
        return hired_;
    }

}
