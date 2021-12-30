#include <bits/stdc++.h>
using namespace std;

int main(){
    int no;
    char ch;
    start :
    cout<<"Enter any number\n";
    cin>>no;
    if(no % 2 == 0){
        cout<<"Even\n";
    }else{
        cout<<"odd\n";
    }
    cout<<"Do you want to continue\n";
    cin>>ch;
    if(ch == 'y' || ch == 'Y'){
        goto start;
    }else{
        exit(0);
    }
    return 0;
}