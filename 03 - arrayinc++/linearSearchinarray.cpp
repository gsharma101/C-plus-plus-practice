#include <bits\stdc++.h>
//! Program to search for a specific element in a 1-D array (linear search)
using namespace std;
// ? Sample program consist of 10 employees salary
int main(){
    int A[20],size,i,flag=0,num,pos;
    cout<<"\nEnter the number of elements in the array"<<"\n";
    cin>>size;
    cout<<"\nEnter the elements of array (in ascending order):\n";
    for(i=0;i<size;i++){
        cout<<"Enter element number:"<<i+1<<"\n";
        cin>>A[i];
    }
    cout<<"Enter the element to be searched for:";
    cin>>num;
    for(i=0;i<size;i++){
        if(A[i] == num){
            flag = 1;
            pos = i;
            break;
        }
    }
    if(flag == 0){
        cout<<"Elements not found";
    }else{
        cout<<"Element found at position "<<(pos + 1);
    }
    return 0;
}