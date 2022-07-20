#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Choose a number from one to three: ";
    cin>>n;
    switch(n){
        case 1: 
            cout<<"Good\n"; 
            break;
        case 2: 
            cout<<"Better\n";
            break; 
        case 3: 
            cout<<"Best\n"; 
            break;
        default: 
            cout<<"Invalid";
    }
    return 0;
}