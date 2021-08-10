#include <bits\stdc++.h>
using namespace std;

int main(){
    int day;
    cout<<"Enter number of week's day(1-7)\n";
    cin>>day;

    switch(day)
    {
        case 1: cout<<"\n"<<"The day is Sunday";
                break;
        case 2: cout<<"\n"<<"The day is Monday";
                break;
        case 3: cout<<"\n"<<"The day is Tuesday";
                break;
        case 4: cout<<"\n"<<"The day is Wednesday";
                break;
        case 5: cout<<"\n"<<"The day is Thursday";
                break;
        case 6: cout<<"\n"<<"The day is Friday";
                break;
        case 7: cout<<"\n"<<"The day is Saturday";
                break;
        default:cout<<"\n"<<"You entered a wrong number";
                break;
    }
    return 0;
}