#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    switch(n%2==0){
        case 1: cout<<n+1;break;
        default: cout<<"It's an odd number.";
    }
    return 0;
}