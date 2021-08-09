#include <bits/stdc++.h>
using namespace std;

int main(){
    float sales, comm;
    cout<<"Enter sales made by the salesman"<<"\n";
    cin>>sales;
    //! The logic begines
    if(sales > 5000)
        if(sales > 12000)
            if(sales > 22000)
                if(sales > 30000)
                    comm = sales * 0.15;
                else
                    comm = sales * 0.10;
            else
                comm = sales * 0.07;
        else
            comm = sales * 0.03;
    else
        comm = 0;
    cout<<"The commission is:"<<comm<<"\n";
    return 0;
}