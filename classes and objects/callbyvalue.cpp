#include <bits\stdc++.h>
//! Program to illustrate the use of objects as an arguments to member, and non-member funtion using call by value mechanism.
using namespace std;

class Time{
    int hrs,mins,secs;
    public:
        int tot_secs;
        void gettime(int h, int m, int s)
        {
            hrs = h;
            mins = m;
            secs  = s;
            tot_secs = (hrs * 60) + (mins * 60 ) + secs;
        }

        void putdata(void)
        {
            cout<<"Time is: "<<hrs<<":"<<mins<<":"<<secs<<"\n";
        }

        void convert(Time t, char ch); //prototype
        void sum(Time t1, Time t2);
        int gethrs(){return hrs;}
        int getmins(){return mins;}
        int getsec(){return secs;}
}; //class ends

void Time::convert(Time t, char ch)
{
    switch(ch)
    {
        case 'h': cout<<"Time in hours is: "<<t.hrs<<":"<<t.mins<<":"<<t.secs<<"hrs\n";
                  break;
        case 'p': cout<<"Time in am/pm is: "<<((t.hrs>12)?(t.hrs-12):t.hrs)<<":"<<t.mins<<":"<<t.secs;
                  cout<<((t.hrs>12)?"pm":"am")<<"\n";
                  break;
        default:  cout<<"Wrong Option\n";

    }
}

void Time::sum(Time t1, Time t2)
{
    int h, m,s,sq,mq;
    sq = (t1.secs + t2.secs)/60;
    s = (t1.secs + t2.secs)%60;
    mq = (sq + t1.mins + t2.mins)/60;
    m = (sq + t1.mins + t2.mins)%60;
    h = mq = t1.hrs = t2.hrs;
    if(h == 24) h = 0;
    cout<<"Total time is: "<<h<<":"<<m<<":"<<s<<"\n";
}

void printvalues(Time t1){  //non-memberfunction
    cout<<"Total secs:"<<t1.tot_secs; //valid. totsecs can be accessed as it's public member
    cout<<"\n";
}

int main(){
    Time tm1, tm2; //two objects of time created
    int tt;
    tm1.gettime(5,133,27); //? get tm1
    tm2.gettime(7,48,38); //? get tm2
    cout<<"Enter h to convert in hours format, p for am/pm format:";
    char ch;
    cin>>ch;
    tm1.convert(tm2,ch); //? object passed to member funtion
    tm1.sum(tm1,tm2);
    printvalues(tm2); //?object passed to non-member funtion
    return 0;
}