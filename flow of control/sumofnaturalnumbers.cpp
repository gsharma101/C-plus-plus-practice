#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, sum,n;
    cout<<"How many natural numbers?\n";
    cin>>n;
    for(i=1,sum = 0; i<=n; ++i)
    {
        cout<<"\n"<<i;
        sum += i;
    }
    cout<<"\n"<<"The sum of first "<<n<<" natural numbers is: "<<sum<<"\n";
    return 0;
}