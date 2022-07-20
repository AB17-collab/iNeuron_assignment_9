#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    switch(n){
        case 0: 
            cout<<n;
            break;
        default:
            cout<<(-1*n);
    }
    return 0;
}