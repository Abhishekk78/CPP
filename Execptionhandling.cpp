#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    
    try
    {
        int a, b;

        cout << "Enter number of a : ";
        cin >> a;

        cout << "Enter number of b : ";
        cin >> b;

        if (b == 0)
        {
            throw "Number cannot be divided by zero!";
        }

        cout << "Result = " << (float)a / b << endl;
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    try
    {
        int age;

        cout << "\nEnter your age: ";
        cin >> age;

        if (age < 18)
        {
            throw "You are not eligible to vote!";
        }

        cout << "You are eligible to vote." << endl;
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    try
    {
        string password;
        bool hasUppercase = false;

        cout << "\nEnter password: ";
        cin >> password;

        for (char ch : password)
        {
            if (isupper(ch))
            {
                hasUppercase = true;
                break;
            }
        }

        if (!hasUppercase)
        {
            throw "Password must contain at least one uppercase letter!";
        }

        cout << "Password is valid." << endl;
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}