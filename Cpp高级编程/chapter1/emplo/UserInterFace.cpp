
/************************************************
#
#      Filename: UserInterFace.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-25 21:16:52
# Last Modified: 2020-05-25 21:32:54
#***********************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "DataBase.h"
#include "employee.h"
using namespace Records;
using namespace std;

int DisplayMenu();
void DoHire(DataBase& db);
void DoFire(DataBase& db);
void DoPromote(DataBase& db);
void DoDemote(DataBase& db);

int main(int argc, char *argv[])
{
    DataBase employee_db;
    bool done = false;

    while(!done)
    {
        int selection = DisplayMenu();
        switch(selection)
        {
            case 1:
                DoHire(employee_db);
                break;
            case 2:
                DoFire(employee_db);
                break;
            case 3:
                DoPromote(employee_db);
                break;
            case 4:
                employee_db.DisplayAll();
                break;
            case 5:
                employee_db.DisplayCurrent();
                break;
            case 6:
                employee_db.DisplayFormer();
                break;
            case 0:
                done = true;
                break;
            default:
                cerr << "Unknown command." << endl;
                break;
        }
    }
    return 0;
}

int DisplayMenu()
{
    int selection;
    cout << endl;
    cout << "Employee Database" << endl;
    cout << "-----------------" << endl;
    cout << "1) Hire a new employee" << endl;
    cout << "2) Fire an employee" << endl;
    cout << "3) Promote an employee" << endl;
    cout << "4) List all employees" << endl;
    cout << "5) List all current employees" << endl;
    cout << "6) List all former employees" << endl;
    cout << "0) Quit" << endl; 
    cout << endl;
    cout << "---> ";
    cin >> selection;
    return selection;
}

void DoHire(DataBase& db)
{
    string first_name;
    string last_name;
    cout << "First name? ";
    cin >> first_name;
    cout << "Last name? ";
    cin >> last_name;
    try
    {
        db.AddEmployee(first_name, last_name);
    }
    catch (const std::exception& exception)
    {
        cerr << "Ubable to add new employee: " << exception.what() << endl;
    }
}

void DoFire(DataBase& db)
{
    int employee_number;
    cout << "Employee number? ";
    cin >> employee_number;
    try
    {
        Employee& emp = db.GetEmployee(employee_number);
        emp.Fire();
        cout << "Employee " << employee_number << " terminated." << endl;
    }
    catch (const std::exception& exce)
    {
        cerr << "Unable to terminate employee: " << exce.what() << endl;
    }
}

void DoPromote(DataBase& db)
{
    int employee_number;
    int raise_amount;
    cout << "Employee nubmer? ";
    cin >> employee_number;
    cout << "how much of a raise? ";
    cin >> raise_amount;
    try
    {
        Employee& emp = db.GetEmployee(employee_number);
        emp.Promote(raise_amount);
    }
    catch (const std::exception& exce)
    {
        cerr << "Unable to promote employee: " << exce.what() << endl;
    }
}
