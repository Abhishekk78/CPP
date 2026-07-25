#include <bits/stdc++.h>
using namespace std;

class Students
{

public:
    string name;
    int marks;

    void setvalue(string name, int marks)
    {

        this->name = name;
        this->marks = marks;
    }

    void getvalue()
    {

        cout << "Name is => " << this->name << "," << "Marks is =>" << this->marks << "\n";
    }
};

int main()
{

    Students S[100];
    int i, n;

    for (i = 0; i < 10; i++)
    {
        S[i].setvalue("Abhi", i);
    }

    for (i = 0; i < 10; i++)
    {
        S[i].getvalue();
    }

    return 0;
}