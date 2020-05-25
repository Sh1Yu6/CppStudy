
/************************************************
#
#      Filename: DataBaseTest.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-25 21:11:12
# Last Modified: 2020-05-25 21:14:57
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "employee.h"
#include "DataBase.h"
using namespace std;
using namespace Records;
int main(int argc, char *argv[])
{
    DataBase my_db;
    Employee& emp1 = my_db.AddEmployee("aa", "bb");
    emp1.Fire();
    Employee& emp2 = my_db.AddEmployee("Max", "Geoge");
    emp2.SetSalary(100000);
    Employee& emp3 = my_db.AddEmployee("cc", "dd");
    emp3.SetSalary(60000);
    emp3.Promote();
    cout << "all employees: " << endl << endl;
    my_db.DisplayAll();
    cout << "current employees: " << endl << endl;
    my_db.DisplayCurrent();
    cout << "former employees: " << endl << endl;
    my_db.DisplayFormer();
    
    return 0;
}
