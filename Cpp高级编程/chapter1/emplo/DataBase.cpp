
/************************************************
#
#      Filename: DataBase.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-25 20:58:56
# Last Modified: 2020-05-25 21:11:03
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include "DataBase.h"
#include "employee.h"
using namespace std;
namespace Records
{
    DataBase::DataBase(): next_employee_number_(kFirstEmployeeNumber){}

    Employee& DataBase::AddEmployee(const std::string& first_name,
                                    const std::string& last_name)
    {
        Employee the_employee;
        the_employee.SetFirstName(first_name);
        the_employee.SetLastName(last_name);
        the_employee.SetEmployeeNumber(next_employee_number_++);
        the_employee.Hire();
        employees_.push_back(the_employee);
        return employees_[employees_.size()-1];
    }

    Employee& DataBase::GetEmployee(int employee_number)
    {
        for(auto& employee: employees_)
        {
            if(employee.GetEmployeeNumber() == employee_number)
            {
                return employee;
            }
        }
        throw runtime_error("No employee found.");
    }
    Employee& DataBase::GetEmployee(const std::string& first_name, 
                          const std::string& last_name)
    {
        for(auto& employee: employees_)
        {
            if(employee.GetFirstNmae() == first_name 
               && employee.GetLastName() == last_name)
            {
                return employee;
            }
        }
        throw runtime_error("No employee found.");
    }

    void DataBase::DisplayAll() const
    {
        for(const auto& employee: employees_)
        {
            employee.Display();
        }
    }
    void DataBase::DisplayCurrent() const
    {
        for(const auto& employee: employees_)
        {
            if(employee.GetIsHired())
            {
                employee.Display();
            }
        }
    }
    void DataBase::DisplayFormer() const
    {
        for(const auto& employee: employees_)
        {
            if(!employee.GetIsHired())
            {
                employee.Display();
            }
        }

    }

}
