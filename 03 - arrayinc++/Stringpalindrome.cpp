#include <bits\stdc++.h>
using namespace std;
// !Program to check a string is a palindrome or not without using library function
int main(){
    char string[80],c;
    int len = 0;
    cout<<"Enter a string (max. 79 characters): ";
    cin.getline(string,80);
    //loop to find the lenght of the string
    for( ;string[len]; ++len);
    int i,j,flag = 1;
    for(i = 0, j = len - 1; i < len / 2; i++,j--){
        if(string[i]!=string[j]){
            flag = 0;
            break;
        }
    }
    if(flag!=0)
        cout<<"It is not a palindrome";
    else
        cout<<"It's a palindrome";
    return 0;
}