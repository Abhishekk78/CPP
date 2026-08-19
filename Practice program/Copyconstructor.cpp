#include <iostream>
using namespace std;

class Car
{

public:
    int id;
    string name;
    string color;
    int model;

    Car(int id, string name, string color, int model)
    {
        this->id = id;
        this->name = name;
        this->color = color;
        this->model = model;
    };

    Car(Car &copy)
    {
        id = copy.id;
        name = copy.name;
        color = copy.color;
        model = copy.model;
    };
};

int main()
{

    Car c1(1, "bmw", "Red", 2026);
    Car c2(c1);

    cout << "Orignal data....." << endl;
    cout << "Car id is : " << c1.id << endl;
    cout << "Car name is : " << c1.name << endl;
    cout << "Car color is : " << c1.color << endl;
    cout << "Car model is : " << c1.model << endl;

    cout << "Copying data....." << endl;
    cout << "Car id is : " << c2.id << endl;
    cout << "Car name is : " << c2.name << endl;
    cout << "Car color is : " << c2.color << endl;
    cout << "Car model is : " << c2.model << endl;

    return 0;
}