#include <bits\stdc++.h>
using namespace std;

int main(){
    // Declaring vector of type int with maximum 5 integer type
    vector <int> test(5); 
    // Entering the values of the given vector
    for(int i = 0;i<test.size();++i){
        cout<<"Enter the values of vector "<<i + 1<<"\n";
        cin>>test[i];
    }
    // Printing the values of the vector
    for(int i = 0;i<test.size();++i){
        cout<<"Value of vector "<<i + 1<<":-"<<test[i];
        cout<<"\n";
    }
    return 0;
}