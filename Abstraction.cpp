#include <iostream>
#include <string>
using namespace std;


class Admin
{
private:
    
    string company_name;
    int manager_salary;

protected:
    
    int employee_salary;
    int total_staff;

public:
 
    int total_annual_revenue;
    bool can_terminate;

    
    Admin()
    {
        company_name = "ABC Company";
        manager_salary = 50000;
        employee_salary = 25000;
        total_staff = 100;
        total_annual_revenue = 5000000;
        can_terminate = true;
    }

    
    string getCompanyName()
    {
        return company_name;
    }

    int getManagerSalary()
    {
        return manager_salary;
    }

    
    virtual void myAccess()
    {
        cout << "Admin Class" << endl;
        cout << "Company Name           : " << company_name << endl;
        cout << "Manager Salary         : " << manager_salary << endl;
        cout << "Employee Salary        : " << employee_salary << endl;
        cout << "Total Staff            : " << total_staff << endl;
        cout << "Total Annual Revenue   : " << total_annual_revenue << endl;
        cout << "Can Terminate          : "
             << (can_terminate ? "Yes" : "No") << endl;
    }
};



class Manager : public Admin
{
public:

    
    void myAccess() override
    {
        cout << "\nManager Class" << endl;

        
        cout << "Company Name : " << getCompanyName() << endl;
        cout << "Manager Salary : " << getManagerSalary() << endl;

        cout << "Employee Salary : " << employee_salary << endl;
        cout << "Total Staff : " << total_staff << endl;

        
        cout << "Total Annual Revenue   : "
             << total_annual_revenue << endl;

        cout << "Can Terminate          : "
             << (can_terminate ? "Yes" : "No") << endl;
    }
};



class Employee : public Manager
{
public:

    
    void myAccess() override
    {
        cout << "\nEmployee Class" << endl;

       
        cout << "Company Name : " << getCompanyName() << endl;
        cout << "Manager Salary : " << getManagerSalary() << endl;

     
        cout << "Employee Salary : " << employee_salary << endl;
        cout << "Total Staff : " << total_staff << endl;

        
        cout << "Total Annual Revenue   : "
             << total_annual_revenue << endl;

        cout << "Can Terminate          : "
             << (can_terminate ? "Yes" : "No") << endl;
    }
};


int main()
{
    Admin a;
    Manager m;
    Employee e;

    cout << "================ ADMIN ================" << endl;
    a.myAccess();

    cout << "\n================ MANAGER ==============" << endl;
    m.myAccess();

    cout << "\n================ EMPLOYEE =============" << endl;
    e.myAccess();

    return 0;
}