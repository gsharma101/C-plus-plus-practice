#include <bits\stdc++.h>
using namespace std;
//! Program to read price of 20items in an array and then display sum of all the prices, products of all the proces and average of them.
//? Taking sample items as 5
int main(){
    double prices[10],sum,avg,prod;
    sum = avg = 0;
    prod = 1;
    for(int i = 0; i<5;i++){
        cout<<"Enter price for item"<<i+1<<":";
        cin>>prices[i];
        sum += prices[i];
        prod *= prices[i];
    }
    avg = sum/20;
    cout<<"Sum of all prices = "<<sum<<"\n";
    cout<<"Product of all proces = "<<prod<<"\n";
    cout<<"Average of all proces = "<<avg<<"\n";
    return 0;
}