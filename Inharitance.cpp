#include <bits/stdc++.h>
using namespace std;

class Animal{

    public:

    string name;

    void sound(){

        cout << "The Animal is : " << name;
    }

};

class Dog : public Animal{

    public:

    string name;

    void sound(){

        cout << name <<" dog is barking..." <<endl;
    }
};



class Cat : public Animal{

    public:

    string name;

    void sound(){

        cout <<name <<" cat  is mewoow..." <<endl;
    }
};

class Got : public Animal{

    public:

    string name;

    void sound(){

        cout <<name <<" got is meehh..." <<endl;
    }
};


int main(){

  Dog d;
  d.name="German shaperd";
  d.sound();

    Cat c;
  c.name="Kitten";
  c.sound();

    Got g;
  g.name="Justin";
  g.sound();


    return 0;
}
