#include <bits/stdc++.h>
using namespace std;

class Employee{

    public :

    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;


    void getdata(){

        cout <<"Enter employee id : ";
        cin >> emp_id;

        cin.ignore();

        cout << "Enter employee name : ";
        getline(cin,emp_name);

        cout << "Enter employee age : ";
        cin >> emp_age;

        cin.ignore();

        cout << "Enter employee role : ";
        getline(cin,emp_role);

        cout << "Enter employee salary : ";
        cin >> emp_salary;

        cin.ignore();

        cout << "Enter employee city : ";
        getline(cin,emp_city);

          cout << "Enter employee experience : ";
        cin >> emp_experience;

        cin.ignore();

        cout << "Enter employee company name : ";
        getline(cin,emp_company_name);

    }

   void displaydata(){

    cout << "\n ..........................................";
    cout << "\n Employee id  : " << emp_id;
    cout << "\n Employee nme : " <<emp_name;
     cout << "\n Employee age : " <<emp_age;
      cout << "\n Employee role : " <<emp_role;
       cout << "\n Employee salary : " <<emp_salary;
       cout << "\n Employee city : " <<emp_city;
        cout << "\n Employee experience : " <<emp_experience <<"years";
         cout << "\n Employee company name : " <<emp_company_name;

   }

};

int main(){

    Employee emp[5];
    int i,n=5;

    cout << "Enter 5 employee record : " << "\n";

    for(i=0;i<n;i++){
        cout << "Employee " << i+1 <<":";
        emp[i].getdata();
    }


      cout << "Display data  : " << "\n";

    for(i=0;i<n;i++){
        emp[i].displaydata();
    }

return 0;
}