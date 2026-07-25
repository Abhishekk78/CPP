#include <bits/stdc++.h>
using namespace std;

class Timeconverter{

    private :

    int hours,minutes,seconds,totalseconds;

    public:

    void secondsToTime(){
      
        cout <<"Enter total seconds : ";
        cin >> totalseconds;

        hours = totalseconds/3600;
        minutes = (totalseconds % 3600) / 60;
        seconds = totalseconds % 60;

        cout <<"HH:MM:SS = " << hours <<":" <<minutes << ":" <<seconds << ":" <<"\n";


    }

    void timeToSeconds(){

        cout <<"Enter hours : ";
        cin >> hours;

        cout << "Enter minutes : ";
        cin >> minutes;

        cout << "Enter seconds : ";
        cin >> seconds;

        totalseconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total Seconds = " << totalseconds << "\n";
    }

};

int main(){

    Timeconverter t;
    int choice;

    do{
        cout << "\n .....Time converter ......";
        cout << "1. Seconds to HH:MM:SS \n";
        cout << "2.HH:MM:SS to Seconds \n";
        cout << "3. Exit \n ";
        cout <<"Enter your choice : ";
        cin >> choice;

        switch(choice){

            case 1 :
            t.secondsToTime();
            break;

            case 2 :
            t.timeToSeconds();
            break;

            case 3 : 
            cout << "Program Ended..." <<" \n";
            break;

            default : 
            cout << "Invalid choice..." << "\n";
        }

    }while(choice !=3);

    return 0;
}