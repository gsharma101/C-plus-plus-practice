#include <bits/stdc++.h>
using namespace std;

int main(){
    // &return memory address of its operand
    // *returns the value of the variable located at the address following it
    int val = 25;
    int *ptr = &val;
    cout<<ptr<<"\n";
    cout<<*ptr;
    return 0;
}