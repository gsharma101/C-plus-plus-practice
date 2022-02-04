#include <bits\stdc++.h>
using namespace std;
//! Program to accept sales of each day of the month and print the total sales and average sales of the month
//? Taking sample items as 5
int main(){
    const int size = 5;
    float sales[size],avg = 0,total = 0;
    // ?Loop to input total sales
    for(int i = 0; i<size; i++){
        cout<<"Enter sales of day "<<i+1<<"\n";
        cin>> sales[i];
        total += sales[i];
    }
    avg = total/size;
    cout<<"\n"<<"Total sales = "<<total<<"\n";
    cout<<"Average sales = "<<avg<<"\n";
   return 0;
}