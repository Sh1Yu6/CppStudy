#pragma once
#include <iostream>
#include <vector>
#include "employee.h"

namespace Records
{
    const int kFirstEmployeeNumber = 1000;

    class DataBase
    {
        public:
            DataBase();
            Employee& AddEmployee(const std::string& first_name,
                                  const std::string& last_name);

            Employee& GetEmployee(int employee_number);
            Employee& GetEmployee(const std::string& first_name, 
                                  const std::string& last_name);

            void DisplayAll() const;
            void DisplayCurrent() const;
            void DisplayFormer() const;
            
        private:
            std::vector<Employee> employees_;
            int next_employee_number_;
    };
}
