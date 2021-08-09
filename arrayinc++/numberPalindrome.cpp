#include <bits/stdc++.h>
using namespace std;

int main(){
    int number,temp,rev = 0,r;
    cout<<"Enter a number"<<"\n";
    cin>>number;
    temp = number;
    while(temp > 0){
        r = temp % 10;
        rev = (rev * 10) + r;
        temp = temp / 10;
    }
    cout<<"The reverse rumber is "<<rev<<"\n";
    if(number != rev){
        cout<<"It's not a palindrome number";
    }else{
        cout<<"It's a palindrom number";
    }
    return 0;
}