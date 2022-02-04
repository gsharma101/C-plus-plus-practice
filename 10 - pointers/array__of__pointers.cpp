#include <bits\stdc++.h>
using namespace std;

int main(){
    int *ip[5];
    int f = 65,s = 67, t = 69,fO = 70,fi = 75;
    // Initialize array pointers by making them point to 5 different ints
    ip[0] = &f;
    ip[1] = &s;
    ip[2] = &t;
    ip[3] = &fO;
    ip[4] = &fi;
    // print the values being pointed to by the pointers
    for(int i = 0;i<5;++i)
    {
        cout<<"The pointer ip["<<i<<"]points to "<<ip[i]<<"\n";
    }
        // print the addresses stored in the array
        cout<<"the base address of array ip of pointers is "<<ip<<"\n";
    for(int i = 0;i<5;++i)
    {
        cout<<"The address stored in ip["<<i<<"]is "<<ip[i]<<"\n";
    }
    return 0;
}