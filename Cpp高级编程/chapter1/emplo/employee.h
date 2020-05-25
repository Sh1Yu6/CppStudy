#pragma once
#include <string>

namespace Records
{
    const int kDefaultStartingSalary = 30000;
    
    class Employee
    {
        public:
            Employee();

            void Promote(int raise_amout = 1000);
            void Demote(int demerit_amout = 1000);
            void Hire();    // Hires or rehires the Employee
            void Fire();    // Dismisses the employee
            void Display() const;   // Outputs employee info to console

            void SetFirstName(const std::string& first_name);
            const std::string& GetFirstNmae() const;

            void SetLastName(const std::string& last_name);
            const std::string& GetLastName() const;

            void SetEmployeeNumber(int employee_number);
            int GetEmployeeNumber() const;

            void SetSalary(int new_salary);
            int GetSalary() const;

            bool GetIsHired() const;

        private:
            std::string first_name_;
            std::string last_name_;
            int employee_number_;
            int salary_;
            bool hired_;
    };
}


