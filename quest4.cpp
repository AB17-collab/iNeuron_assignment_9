#include<iostream>
using namespace std;
int main(){
    bool continueTheInsertion = true;
    cout<<"*****Welcome to my Triangle Checker*****\n";
    while(continueTheInsertion){
        int n;
        cout<<"Choose your triangle: 1.Isosceles 2.Right-angled 3.Equilateral ";
        cin>>n;
        switch(n){
            case 1:{
                int a,b,c;
                cout<<"Enter the three sides of the triangle: ";
                cin>>a>>b>>c; 
                if(a+b>c || a+c>b || b+c>a) 
                    cout<<"It is an isosceles triangle.\n";
                else
                    cout<<"It is not an isosceles triangle.\n";
                break;
            }
            case 2:{
                int a,b,c;
                cout<<"Enter the three sides of a triangle: ";
                cin>>a>>b>>c; 
                int a2 = a*a;
                int b2 = b*b; 
                int c2 = c*c; 
                if(a2+b2==c2 || a2+c2==b2 || b2+c2==a2){
                    cout<<"It is a right angled triangle.\n";
                } 
                else{
                    cout<<"It is not a right angled triangle.\n";
                }
                break;
            }
            case 3:{
                int a,b,c;
                cout<<"Enter the three sides: ";
                cin>>a>>b>>c; 
                if(a==b && a==c){
                    cout<<"It is an equilateral triangle.\n";
                }
                else{
                    cout<<"It is not an equilateral triangle.\n";
                }
                break;
            }
            default:{
                cout<<"Enter number from 1 to 3"<<"\n"; 
            }
        }
        char ask;
        cout<<"Would you like to continue with operations? (y/n)";
        cin>>ask; 
        if(ask=='y')
            continueTheInsertion = true; 
        else
            continueTheInsertion = false;
    }
    cout<<"*****Thank You for using our triangle checker******";
    return 0;
}