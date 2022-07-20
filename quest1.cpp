#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the month number:";
    cin>>n;
    switch(n){
        case 1: 
            cout<<"Number of days:"<<31;
            break;
        case 2: 
        {
            char asked;
            cout<<"Is it a leap year?(y/n) ";
            cin>>asked;
            if(asked=='y')
                cout<<"Number of days:"<<29;
            else
                cout<<"Number of days:"<<28;

            break;
        }
        case 3: 
            cout<<"Number of days:"<<31;
            break;
        case 4: 
            cout<<"Number of days:"<<30;
            break;
        case 5: 
            cout<<"Number of days:"<<31;
            break;
        case 6: 
            cout<<"Number of days:"<<30;
            break;
        case 7: 
            cout<<"Number of days:"<<31;
            break;
        case 8: 
            cout<<"Number of days:"<<31;
            break;
        case 9: 
            cout<<"Number of days:"<<30;
            break;
        case 10: 
            cout<<"Number of days:"<<31;
            break;
        case 11: 
            cout<<"Number of days:"<<30;
            break;
        case 12: 
            cout<<"Number of days:"<<31;
            break;
        default: 
            cout<<"Enter a number between 1 to 12";
    }
    return 0;
}