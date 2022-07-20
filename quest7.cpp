#include<iostream>
using namespace std;
int main(){
    int elecUnit;
    cout<<"Enter the electricity bill for the month:";
    cin>>elecUnit;
    switch(elecUnit){
        case 1 ... 50:
            cout<<"Electricity Bill: Rs."<<(double)(elecUnit*(0.50))+0.2*((double)(elecUnit*(0.50)));
            break;
        case 51 ... 150:
            cout<<"Electricity Bill: Rs."<<(double)(elecUnit*(0.75))+0.2*((double)(elecUnit*(0.75)));
            break;
        case 151 ... 250:
            cout<<"Electricity Bill: Rs."<<(double)(elecUnit*(1.20))+0.2*((double)(elecUnit*(1.20)));
            break;
        default:
            cout<<"Electricity Bill: Rs."<<(double)(elecUnit*(1.50))+0.2*((double)(elecUnit*(1.50)));
    }
    return 0;
}