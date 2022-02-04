#include <bits\stdc++.h>
using namespace std;

int * rollno; // ? declare an int pointer for rollno array
float * marks;  // ? declare a float pointer for marks

int main(){
    int size;
    cout<<"How many elements are there in an array ?\n";
    cin>>size;
    rollno = new int[size]; // ? dynamically allocate rollno array
    marks = new float[size];    // ? dynamically allocated marks array
    // ? Check whether the memory is available or not
    if((!rollno) || (!marks)){ //? if rollno or marks is null pointer
        cout<<"Out of Memory ! Aborting !";
        return 1;
    }
    // ? Reading in value in the array elements
    for(int i = 0; i<size; ++i){
        cout<<"Enter rollno and marks for student"<<(i + 1)<<"\n";
        cin>>rollno[i]>>marks[i];
    }
    // ? Display the arry contains
    cout<<"\t Roll no \t Marks \n";
    for(int i = 0; i< size; ++i)
        cout<<"\t"<<rollno[i]<<"\t\t"<<marks[i]<<"\n";
    delete[]rollno; // ? Deallocating rollno array
    delete[]marks;  // ? Deallocating marks array
    return 0;
}