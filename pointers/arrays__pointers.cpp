#include <bits\stdc++.h>
using namespace std;

int main(){
    int a[] = {6,2,1,5,3};
    cout<<a<<"\n";
    cout<<&a<<"\n";
    // a = &a this is only possible in arrays 
    cout<<a[2]<<"\n";
    cout<< *(a + 2)<<"\n";
    cout<< a[3]<<"\n";
    cout<< 3[a]<<"\n";
    return 0;
}