#include <bits/stdc++.h>
using namespace std;

class Car{
    
    public:

    string brand;

    void cardetails(){
        cout << "The car name is : " << brand;
    }

};

int main(){

    Car c;
    
    c.brand="Toyta";
    c.cardetails();

    return 0;
}