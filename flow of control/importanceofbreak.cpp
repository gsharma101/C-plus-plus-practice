#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 0,a = 0,b = 0,c = 0,fail = 0;
    while(i <= 5)
    {
        switch(i++)
        {
            case 1:
                break;
            case 2:++a;
                break;
            case 3:
                break;
            case 4: ++b;
                break;
            case 5: ++c;
                break;
            default: ++fail;
        }
    }
    cout<<"a ="<<a<<"\t"<<"b = "<<b<<"\n";
    cout<<"c ="<<c<<"\t"<<"fail = "<<fail<<"\n";
    return 0;
}