#include <iostream>
using namespace std;

class Customer{
    
    private:
    
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    long long cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;
    
    
    public :
    
    void setcustomerdata(){
        
        cout << "Enter customer id : ";
        cin >> cust_id;
        
        cout << "Enter customer name : ";
        cin >> cust_name;
        
        cout << "Enter customer age : ";
        cin >> cust_age;
        
        cout << "Enter customer city : ";
        cin >> cust_city;
        
        cout << "Enter customer mobile number : ";
        cin >> cust_mobile_number;

        cout << "Enter customer sim card validity : ";
        cin >> cust_simcard_validity;
        
        cout << "Enter customer telecom brand name : ";
        cin >> cust_telecom_brand_name;
        
    }
    
    void getcustomerdata(){
        
    cout <<" \n .....Customer record system .......";
    cout << "\n customer id is  : " << cust_id;
    cout << "\n customer name is  : " << cust_name;
    cout << "\n customer age is  : " << cust_age;
    cout << "\n customer city is  : " << cust_city;
    cout << "\n customer mobile number is  : " << cust_mobile_number;
    cout << "\n customer sim card validty  is  : " << cust_simcard_validity;
    cout << "\n customer telecom brand name is  : " << cust_telecom_brand_name;

    }
    
};


int main(){
    
 Customer C[100];
 int i,n=5;
 
 cout <<"Enter details of 5 customer " <<"\n";
 
 for(i=0;i<n;i++){
    
    cout << "Customer is : " << i+1 <<":" <<"\n";
    
    C[i].setcustomerdata();
 }
 

cout <<"Record of 5 customer is : " <<"\n";

  for(i=0;i<n;i++){
    
    C[i].getcustomerdata();
 }
 
 return 0;
 
}