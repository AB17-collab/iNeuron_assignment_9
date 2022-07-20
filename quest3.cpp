#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a day of the week:";
    cin>>n;
    switch(n){
        case 1:
            cout<<"We can't change the direction of the wind, but we can adjust the sails. -Indian Proverb"; 
            break;
        case 2:
            cout<<"Don't take rest after your first victory because if you fail in second, more lips are waiting to say that your first victory was just luck.-A. P. J. Abdul Kalam";
            break;
        case 3:
            cout<<"Some goals are so worthy, it's glorious even to fail!. -Captain Manoj Kumar Pandey";
            break;
        case 4:
            cout<<"Bombs and pistols do not make a revolution. The sword of revolution is sharpened on the whetting stone of ideas. -Bhagat Singh";
            break;
        case 5:
            cout<<"One individual may die for an idea, but that idea will, after his death, incarnate itself in a thousand lives. -Subhash Chandra Bose";
            break;
        case 6:
            cout<<"What we possess is temporary, but what we become is permanent. -Devdutt Patnaik";
            break;
        case 7:
            cout<<"They who give have all things; they who withhold have nothing. -Indian Proverb";
            break;
        default:
            cout<<"Certian things capture the eye,but pursue only those that capture the heart. -Indian Proverb";
    }
    return 0;
}