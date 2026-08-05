#include <iostream>
using namespace std;

class Cafe
{

private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Cafe()
    {
        cafe_id = 0;
        cafe_name = "";
        cafe_type = "";
        cafe_rating = "";
        cafe_location = "";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    void getdata()
    {

        cout << "Enter cafe id : ";
        cin >> cafe_id;
        cout << "Enter cafe name : ";
        cin >> cafe_name;
        cout << "Enter cafe type : ";
        cin >> cafe_type;
        cout << "Enter cafe rating : ";
        cin >> cafe_rating;
        cout << "Enter cafe location : ";
        cin >> cafe_location;
        cout << "Enter cafe establish year : ";
        cin >> cafe_establish_year;
        cout << "Enter cafe staff quantity : ";
        cin >> cafe_staff_quantity;
    }

    void displaydata()
    {
        cout << "Cafe id is : " << cafe_id << endl;
        cout << "Cafe name is : " << cafe_name << endl;
        cout << "Cafe type is : " << cafe_type << endl;
        cout << "Cafe rating is : " << cafe_rating << endl;
        cout << "Cafe loation is : " << cafe_location << endl;
        cout << "Cafe establish year is : " << cafe_establish_year << endl;
        cout << "Cafe staff quantity is : " << cafe_staff_quantity << endl;
    }
};

int main(){

    int i,n;

    cout << "Enter n number of cafe : " ;
    cin >> n;

    Cafe c[n];

    cout << ".......Cafe entries ......." << endl;

    for(i=0;i<n;i++){
        cout << "Cafe details is " << i+1 << ":" <<endl;
        c[i].getdata();
    }

    cout << ".......Cafe details is ......" <<endl;

        for(i=0;i<n;i++){

        c[i].displaydata();
    }
return 0;
}