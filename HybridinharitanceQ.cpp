#include <iostream>
using namespace std;

class A
{
protected:
    int n1;

public:
    A(int a)
    {
        n1 = a;
        cout << "A Constructor Called" << endl;
    }
};


class B : virtual public A
{
protected:
    int n2;

public:
    B(int a, int b) : A(a)
    {
        n2 = b;
        cout << "B Constructor Called" << endl;
    }
};


class C : virtual public A
{
protected:
    int n3;

public:
    C(int a, int c) : A(a)
    {
        n3 = c;
        cout << "C Constructor Called" << endl;
    }
};


class D : public B, public C
{
private:
    int n4;

public:
    D(int a, int b, int c, int d)
        : A(a), B(a, b), C(a, c)
    {
        n4 = d;

        cout << "D Constructor Called" << endl;
    }

    void sum()
    {
        int ans = n1 + n2 + n3 + n4;

        cout << "\nNumber 1 = " << n1 << endl;
        cout << "Number 2 = " << n2 << endl;
        cout << "Number 3 = " << n3 << endl;
        cout << "Number 4 = " << n4 << endl;

        cout << "\nSum = " << ans << endl;
    }
};


int main()
{
    D obj(10, 20, 30, 40);

    obj.sum();

    return 0;
}