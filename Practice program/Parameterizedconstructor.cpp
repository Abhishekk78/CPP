#include <iostream>
using namespace std;

class Abhi{

    public :

    string name;
    int age;

    Abhi(string n, int a){
     
        name = n;
        age = a;

    }

    void displaydata(){
        cout << "Name is => " << name <<endl;
        cout << "Age is => " << age <<endl;

    }


};

int main(){

    Abhi A("Abhi",27);
    A.displaydata();


    return 0;
}