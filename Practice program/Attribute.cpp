#include <bits/stdc++.h>
using namespace std;

class Bankaccount{

    private:
    
     int Balance=0;
     int Accountnumber;

     public:

     void Setbalance(int r){

        this -> Balance += r;

        cout << "Updated balance is : " << this -> Balance <<"\n";
     }

     void Setaccountnumber(int acc){

        this -> Accountnumber = acc;

        cout << "Account number  is : " << this -> Accountnumber <<"\n";
     }


    //  void Getbalance(){

    //     cout << "Current balance is : " << this -> Balance <<"\n";

    //  }

    //  void Getaccountnumber(){

    //     cout <<"Account number is : " << this -> Accountnumber <<"\n";
    //  }

     void Getbankdetails(){

        cout << "The current balance is : " << this->Balance <<"\n" <<"The updated balance is :"<<this ->Balance <<"\n"
        <<"The account number is : " << this ->Accountnumber;

     }


};


int main(){

    Bankaccount Account;

    Account.Setbalance(10000);
    // Account.Getbalance();
    Account.Setaccountnumber(1234568546);
    // Account.Getaccountnumber();
    // Account.Getbankdetails();

    return 0;

}