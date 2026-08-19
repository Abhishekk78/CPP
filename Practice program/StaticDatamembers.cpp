#include <iostream>
using namespace std;

class Abhi{

    public : 

    int id;
    string name;
    int age;

    static int totalmember;

    Abhi(int id, string name , int age){
        this -> id = id;
        this -> name = name;
        this -> age = age;

        totalmember ++;
    }

    void diaplay(){
        cout << ".... Information about memebers......" << endl;
        cout << "Id is : " << id << endl;
        cout << "Name is : " << name << endl;
        cout << "Age is : " << age << endl;
    }
};

int Abhi :: totalmember = 0;

int main(){

    

    Abhi(1,"Abhi",27);
    Abhi(2,"Shivu",21);
    Abhi(3,"Vaibhav",22);    
    Abhi(4,"Dvij",25);
    Abhi(3,"Maitri",21);
    
     
    cout << "Total memeber is : " << Abhi :: totalmember << endl;
    
    
return 0;
}

