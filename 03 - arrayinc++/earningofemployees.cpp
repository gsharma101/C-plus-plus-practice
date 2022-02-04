#include <bits\stdc++.h>
//! Program to count the number of employees earning more than 1lakh rupees per annum. The monthly salaries of 100 employees are given
using namespace std;
// ? Sample program consist of 10 employees salary
int main(){
    const int size = 10;
    float sal[size],annual_sal;
    int count = 0;
    // Looping to read monthly salary of 100 employs
    for(int i = 0; i<size; i++){
        cout<<"Enter monthaly salary for employee "<<i+1<<"\n";
        cin>>sal[i];
    }
    // Loop to count employees earning more than Rs.1lakh/annum
    for(int i=0;i<size;i++){
        annual_sal = sal[i] * 12;
        if(annual_sal > 100000){
            ++count;
        }
    }
    cout<<count<<" employees out of "<<size<<" employees are earning more than Rs 1lakh per annum.";
    return 0;
}