#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year:";
    cin>>year;
    switch(year%4){
        case 0:
            if(year%100==0){
                if(year%400==0)
                    cout<<"Leap Year"; 
                else
                    cout<<"Not a leap year";
            }
            else
                cout<<"Leap Year";
            break;
        default:
            cout<<"Not a leap year";
    }
    return 0;
}