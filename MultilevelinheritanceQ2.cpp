#include <iostream>
using namespace std;

class P {

    protected : 

    float temp;

};

class Q : public P {

    protected : 

     float c,f;

     public :
     
     void setCelcius(){
        cout << "Enter celcius : ";
        cin >> c;
     }

     void toFahrenheit(){

        f = ( c * 9.0/5.0) + 32;

        cout << "Celcius To Fahrenheit is :  " << f << endl;

     }
};

class R : public Q{

    private : 

    float k;

    public : 

    void toKelvin(){
     
     k = (f-32) * 5.0/9.0 + 273.15;
     
     cout << "Fahrenheit To Kelvin is " << k << endl;

    }
};

int main(){

    R obj;
    obj.setCelcius();
    obj.toFahrenheit();
    obj.toKelvin();

    return 0;
}

