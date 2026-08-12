#include <iostream>
using namespace std;


class X{

    protected : 

    int a,b,c;

};

class Y : public X{

    public : 

    void setData(){

        cout << "Enter first number : ";
        cin >> a ;
        cout << "Enter second number : ";
        cin >> b ;
        cout << "Enter third number : ";
        cin >> c ;
    }

    void getdata(){

        int sum;

        sum = (a*a*a) + (b*b*b) + (c*c*c);

        cout << "First number of cube is : " << a <<endl;
        
        cout << "Second number of cube is : " << b <<endl;
        
        cout << "Third number of cube is : " << c <<endl;

        
        cout << "Total number of cube is : " << sum <<endl;
    }

};

int main(){

    Y obj;
    obj.setData();
    obj.getdata();
    
    return 0;
}