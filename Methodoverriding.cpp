#include <iostream>
using namespace std;

class Cricket{

    public : 

     virtual void getTotalOvers(){
        cout << "Cricket total overs " << endl;
     }

};

class T20Match : public Cricket{

    public : 

    void getTotalOvers() override{
        cout << "In  T20 Match  total over is  = 20 Overs" <<endl;
    }
};

class TestMatch : public Cricket{

    public : 

    void getTotalOvers() override{
        cout << "In  Test Match  total over is  = Unlimited" <<endl;
    }
};

int main(){

    Cricket c;
    T20Match T20;
    TestMatch TM;

    cout << "........Total over in cricket is ......." <<endl;
    c.getTotalOvers();

    cout << "........T20 cricket total overs  is ......." <<endl;
    
    T20.getTotalOvers();

    cout << "........Test cricket total is ......." <<endl;

    TM.getTotalOvers();

    return 0;
}
