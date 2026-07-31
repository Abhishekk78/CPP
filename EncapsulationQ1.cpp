#include <iostream>
using namespace std;

class Students{
    
    private :
    
    int student_id;
    string student_name;
    int student_age;
    string student_course;
    string student_city;
    string student_email;
    string student_college;
    
    
    public :
    
    void setstudentdata(){
        
        cout <<"Enter student id : ";
        cin >> student_id;
        
        
        cout << "Enter student name : " ;
        cin >> student_name;
        
        cout << "Enter student age : ";
        cin >> student_age;
        
            cout << "Enter student course : ";
        cin >> student_course;
        
            cout << "Enter student city : ";
        cin >> student_city;
        
            cout << "Enter student email : ";
        cin >> student_email;
        
            cout << "Enter student college : ";
        cin >> student_college;
        
    }
    
    void getstudentdata(){
        
        cout << "\n ....students data ..... ";
        cout << "\n student id is : " << student_id  <<"\n";
        cout <<"\n student name is : " <<student_name  <<"\n";
        cout << "\n student age is : " <<student_age  <<"\n";
        cout << "\n student course is : " << student_course  << "\n";
        cout << "\n student city is : " << student_city  <<"\n";
        cout << "\n student email is : " << student_email  <<"\n";
        cout << "\n student college is : " << student_college  <<"\n";
    }
    
};

int main(){
    
    Students S[100];
    int i,n=5;
    
    cout << "Enter details of 5 students : " <<"\n";
    
    for(i=0;i<n;i++){
        cout << "Student data is  : " << i+1 <<"\n";
    
            S[i].setstudentdata();
    }
    
    cout << "Student records ";
    
        for(i=0;i<n;i++){
    
        S[i].getstudentdata();
    }
    return 0;
}