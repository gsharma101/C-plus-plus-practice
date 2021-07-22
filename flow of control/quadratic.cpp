#include <bits/stdc++.h>
using namespace std;
//! Program to calculate and print roots of quadratic equation 
int main(){
    float a,b,c,root1,root2,delta;
    cout<<"Enter the value of a,b and c for ax^2 + bx + c:"<<"\n";
    cin>>a>>b>>c;
    if(!a){
        cout<<"Value of a should not be zero"<<"Aborting the program!!!!!!"<<"\n";
    }else{
        delta = b*b - 4*a*c;
        if(delta > 0){
            root1 = (-b + sqrt(delta))/2*a;
            root2 = (-b - sqrt(delta))/2*a;
            cout<<"The roots are Real and Unequal"<<"\n";
            cout<<"Root 1= "<<root1<<"\n";
            cout<<"Root 2= "<<root2;
        }else if(delta == 0){
            root1 = -b / 2*a;
            cout<<"Roots are Real and Equal"<<"\n";
            cout<<"Root1 ="<<root1;
            cout<<"Root2 ="<<root2<<"\n";
        }else{
            cout<<"Roots are complex and Imaginary"<<"\n";
        }
    }
    return 0;
}