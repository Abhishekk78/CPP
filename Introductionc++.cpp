#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,i;

    cout <<"Enter array element : ";
    cin >> n;

    int arr[n];

    cout <<"Enter array element : " <<"\n";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    cout<<"Even array is : " <<"\n";
    for(i=0;i<n;i++){
        if(arr[i]%2==0){

            cout <<"The even number is : " <<arr[i] <<"\n";
        }
    }

    return 0;
}
