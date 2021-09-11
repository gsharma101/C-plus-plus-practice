#include <bits\stdc++.h>
using namespace std;

int main(){
    float op1,op2,res;
    char ch;
    cout<<"Enter two numbers \n";
    cin>>op1>>op2;
    cout<<"\n"<<"Enter any operator(+,-,*,/,%):";
    cin>>ch;
    cout<<"\n";
    switch(ch)
    {
        case '+': res = op1 + op2;
                break;
        case '-': res = op1 - op2;
                break;
        case '/': if(op2 == 0)
                    cout<<"Divide by zero is error!!";
                else
                    res = op1 / op2;
                break;
        case '*':   res = op1 * op2;
                break;
        case '%': if(op2 == 0)
                cout<<"Divide by zero error!!";
            else
                {
                    int r,q;
                    q = op2/op1;
                    r = op2 - (q * op1);
                    res = r;
                }
                break;
        default: cout<<"\n"<<"Wrong operator"<<"\n";
    }
    cout<<"The calculation result is:"<<res<<"\n";
    return 0;
}