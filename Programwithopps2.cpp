#include<iostream>
using namespace std;

class Car{
    
    public:
    
    int car_id;
    string car_comapny_name;
    string car_color;
    string car_model;
    int car_release_year;
    
    void getcardata(){
        
        cout << "Enter car id : ";
        cin >> car_id;
        cin.ignore();
        
        cout << "Enter car company name : ";
        getline(cin,car_comapny_name);
        
        cout << "Enter car color : ";
        getline(cin,car_color);
        
        cout << "Enter car model : ";
        getline(cin, car_model);
        
        cout << "Enter car release date : ";
        cin >> car_release_year;
     cin.ignore();   
     
    }
    
    void displaycardata(){
   
    cout << " \n ...................";
    cout << " \n Car id : " << car_id;
    cout << " \n Car company name : " << car_comapny_name;
    cout << " \n Car color : " << car_color;
    cout << " \n Car model : " << car_model;
    cout << " \n Car release date  : " << car_release_year ;
    
    }
};


int main(){
    
    Car c[5];
    int i,n=5;
    
    cout << "Enter 4 car record : " <<"\n";
    for(i=0;i<n;i++){
        cout <<" \n Car "  << i+1 << ":" <<"\n";
        c[i].getcardata();
    }
    
        cout << "car record : " <<"\n";
        
    for(i=0;i<n;i++){
    c[i].displaycardata();
    }
    
    return 0;
    
}