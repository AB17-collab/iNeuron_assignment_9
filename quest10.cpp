#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter the coefficients of x^2,x and the constant:";
    cin>>a>>b>>c;
    d = b*b-(4*a*c);
    switch(d>0){
        case 1:
            cout<<"Real and distinct roots: "<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a);
            break;
        case 0:
           switch(d<0){
                case 1:
                    cout<<"Imaginary roots: "<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a);
                case 0:
                    cout<<"Real and equal roots: "<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a);
           }
    }
    return 0;
}