#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float gpa;

public:

    Student()
    {
        name = "";
        rollNo = 0;
        gpa = 0.0;
    }

    
    Student(string n, int r, float g)
    {
        name = n;
        rollNo = r;
        gpa = g;
    }

    
    Student(const Student &s)
    {
        name = s.name;
        rollNo = s.rollNo;
        gpa = s.gpa;
    }

    
    string getName() const
    {
        return name;
    }

    int getRollNo() const
    {
        return rollNo;
    }

    float getGpa() const
    {
        return gpa;
    }

    
    void display() const
    {
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "GPA     : " << gpa << endl;
    }
};




class StudentRecordManager
{
private:
    Student *students;   
    int count;
    int capacity;

public:

    
    StudentRecordManager()
    {
        count = 0;
        capacity = 2;

        students = new Student[capacity];
    }

    
    void addStudent(const Student &s)
    {
        
        if (count == capacity)
        {
            capacity = capacity * 2;

            Student *temp = new Student[capacity];

            
            for (int i = 0; i < count; i++)
            {
                temp[i] = students[i];
            }

            
            delete[] students;

            
            students = temp;
        }

        students[count] = s;
        count++;

        cout << "Student added successfully!" << endl;
    }

    
    void displayAll()
    {
        if (count == 0)
        {
            cout << "No student records found." << endl;
            return;
        }

        cout << "\n===== ALL STUDENT RECORDS =====\n";

        for (int i = 0; i < count; i++)
        {
            cout << "\nStudent " << i + 1 << endl;
            cout << "------------------" << endl;

            students[i].display();
        }
    }

    
    void searchStudent(int rollNo)
    {
        bool found = false;

        for (int i = 0; i < count; i++)
        {
            if (students[i].getRollNo() == rollNo)
            {
                cout << "\nStudent Found!" << endl;
                cout << "------------------" << endl;

                students[i].display();

                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "\nStudent with Roll No "
                 << rollNo
                 << " not found." << endl;
        }
    }


    ~StudentRecordManager()
    {
        delete[] students;
        cout << "\nMemory released successfully." << endl;
    }
};




int main()
{
    
    StudentRecordManager manager;



    Student s1("Abhishek", 101, 8.5);
    Student s2("Rahul", 102, 7.8);
    Student s3("Priya", 103, 9.1);


    
    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);


    
    manager.displayAll();


    
    cout << "\n===== SEARCH STUDENT =====" << endl;

    int roll;

    cout << "Enter Roll No to search: ";
    cin >> roll;

    manager.searchStudent(roll);

    cout << "\n===== COPY CONSTRUCTOR =====" << endl;

    Student s4 = s1;

    cout << "Copied Student Details:" << endl;
    s4.display();

    return 0;
}