#include <bits/stdc++.h>
using namespace std;

int main(){
    // &return memory address of its operand
    // *returns the value of the variable located at the address following it
    int val = 25;
    int *ptr = &val;
    cout<<ptr<<"\n";
    cout<<*ptr;
    // If we print ptr then the output will be address of variable val
    // If we print val then then the output will be 25
    // If we print *ptr then the output will be 25 this is called dereferencing
    // If we print &val then it will print the address of val
    return 0;
}