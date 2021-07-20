#include <bits\stdc++.h>
//! Program re read marks of 50 students and store them under an array (for demo i have taken 5 student)
using namespace std;

int main(){
    const int size = 5;
    float marks[size];
    for(int i=0;i<size;i++){ //?Looping through 5 elements
        cout<<"Enter marks of students "<<i+1<<"\n";
        cin>>marks[i];
    }
    cout<<"\n";
    for(int i = 0; i<size; i++){
        cout<<"Marks["<<i<<"]="<<marks[i]<<"\n";
    }
    return 0;
}