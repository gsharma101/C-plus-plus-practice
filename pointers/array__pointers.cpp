#include <bits\stdc++.h>
using namespace std;

int main(){
    int * a;
    int age[10];
    cout<<"Enter the values for array age \n";
    for(int i = 0; i<10; ++i){
        cout<<"Enter value "<<i + 1<<"\n";
        cin>>age[i];
    }
    a = age;
    cout<<"\n a points to "<<*a<<"\n";
    cout<<" age point to "<<*age<<"\n";
    return 0;
}
// ! Explanantion
// In the above given code a ia apointer to integer and age is an array holding 10 integers. The pointer a is made to point
// to wherre age is pointing to. When the data value of these pointers are printed both the value comes out to be the same
