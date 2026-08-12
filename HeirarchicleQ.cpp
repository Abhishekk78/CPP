#include <iostream>
using namespace std;

class RBI{

    protected : 

     float rate;

     public : 

     void getROI(){
      cout << "Rate of intrest is : " << rate <<"%" <<endl;
     }
};

class SBI : public RBI{

    public : 

    SBI(){

        rate = 12.5;
    }
};

class BOB : public RBI{

    public : 

    BOB(){

        rate = 11.5;
    }
};

class ICICI : public RBI{

    public : 

    ICICI(){

        rate = 18.0;
    }
};

int main(){

    SBI s;
    BOB b;
    ICICI i ;

    cout << "SBI Bank";
    s.getROI();
    cout << "BOB Bank";
    b.getROI();
    cout << "ICICI Bank";
    i.getROI();
    
    return 0;
}