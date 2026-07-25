#include <bits/stdc++.h>
using namespace std;

int main(){

    int start,end;

    cout << "Enter first number : ";
    cin >> start;
    cout << "Enter second number : ";
    cin >> end;

    int leapyears[100];
    int count=0,i,year;

    for(year=start;year<=end;year++){

        if((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0)){
            leapyears[count] = year;
            count++;
        }
    }

    cout<<"Array is : ";
    for(i=0;i<count;i++){
        cout << leapyears[i];
        if(i<count-1){
            cout << (",");
        }
    }
    return 0;
}