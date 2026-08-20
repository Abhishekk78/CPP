#include <iostream>
using namespace std;

class Calculator{

};

class Arithmetic : public Calculator{

    public:

    

    void calculate(int a , int b){
        cout << "The division is : " << float(a/b) << endl;
    }

        void calculate(int a , int b , int c){
        cout << "The substraction is : " << a - b - c << endl;
    }

        void calculate(int a , int b, int c , int d){
        cout << "The multiplication is : " << a * b * c * d << endl;
    }

        void calculate(int a , int b , int c ,int d , int e){
        cout << "The division is : " <<  a + b + c + d << endl;
    }

};

int main(){

    Arithmetic A;

    A.calculate(20,10);
    A.calculate(150,100,10);
    A.calculate(10,20,30,40);
    A.calculate(10,20,30,40,50);

    return 0;

}