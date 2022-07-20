#include<iostream>
using namespace std;
int main(){
    bool continueTheCalc = true;
    cout<<"*****Welcome to my Calculator*****\n";
    while(continueTheCalc){
        int n;
        cout<<"Choose your operation: 1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit ";
        cin>>n;
        switch(n){
            case 1:{
                int a,b;
                cout<<"Enter the two numbers: ";
                cin>>a>>b; 
                cout<<"The sum:"<<a+b<<"\n"; 
                break;
            }
            case 2:{
                int a,b;
                cout<<"Enter the two numbers: ";
                cin>>a>>b; 
                int bigger = max(a,b);
                int smaller = min(a,b);
                cout<<"The difference:"<<bigger-smaller<<"\n"; 
                break;
            }
            case 3:{
                int a,b;
                cout<<"Enter the two numbers: ";
                cin>>a>>b; 
                cout<<"The product:"<<a*b<<"\n"; 
                break;
            }
            case 4:{
                int a,b;
                cout<<"Enter the two numbers: ";
                cin>>a>>b;
                if(b==0){
                    cout<<"Enter a non-zero number as divisor"<<"\n";
                    continue;
                } 
                cout<<"The quotient:"<<a/b<<"\n"; 
                break;
            }
            case 5:
            {
                cout<<"*****Thank You for using our calculator******";
                exit(0);
            }
            default:{
                cout<<"Enter number betweeen 1 and 5"<<"\n"; 
            }
        }
        char ask;
        cout<<"Would you like to continue with operations? (y/n)";
        cin>>ask; 
        if(ask=='y')
            continueTheCalc = true; 
        else
            continueTheCalc = false;
    }
    cout<<"*****Thank You for using our calculator******";
    return 0;
}