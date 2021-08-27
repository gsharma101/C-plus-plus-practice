//! Program to illustrate the call by reference mechanism on objects
#include <bits\stdc++.h>
using namespace std;
class Time{
    int hrs,mins,secs;
    char suf[4];
    public:
        int tot_secs;
        void gettime(int h,int m, int s)
        {
            hrs = h;
            mins = m;
            secs = s;
            tot_secs = (hrs * 60) + (mins * 60) + secs;
            strcpy(suf,"Hrs");
        }
        void outtime(void)
        {
            cout<<"Time is :"<<hrs<<":"<<mins<<":"<<secs<<" "<<suf<<"\n";
        }
        char * getstuf()
        {
            return suf;
        }
        void convert(Time &t, char ch);
        void sum(Time &t1, Time &t2);
        int gethrs(){return hrs;}
        int getmins(){return mins;}
        int getsecs(){return secs;}
        

};

void Time::convert(Time &t, char ch)
{
    switch(ch)
    {
        case 'h': if(strcmp(t.suf,"Hrs") != 0)
        {
            t.hrs = (strcmp(t.suf,"am") == 0)?t.hrs:t.hrs+12;
            strcmp(t.suf,"Hrs");
        }
        cout<<"Time in hours is:"<<t.hrs<<":"<<t.mins<<":"<<t.secs<<" "<<t.suf<<"\n";
        break;
        case 'p': if(strcmp(t.suf,"Hrs") == 0){
            (t.hrs>12)?strcpy(t.suf,"pm"):strcpy(t.suf,"am");
            t.hrs = ((t.hrs > 12)?(t.hrs-12):t.hrs);
        }
        cout<<"Time in am/pm is:"<<t.hrs<<":"<<t.mins<<":"<<t.secs<<" "<<t.suf<<"\n";
        break;
        default: cout<<"Wrong choice\n";
    }
}

void Time::sum(Time &t1, Time &t2)
{
    int h,m,s,sq,mq;
    if(strcmp(t1.getstuf(),"pm") == 0)
    {
        convert(t1,'h');
        if(strcmp(t2.getstuf(),"pm") == 0)
            convert(t2,'h');
        sq = (t1.secs + t2.secs)/60;
        s = (t1.secs = t2.secs)%60;
        mq = (sq + t1.mins + t2.mins)/60;
        m = (sq + t1.mins + t2.mins)%60;
        h = mq + t1.hrs + t2.hrs;
        if(h == 24) h = 0;
        cout<<"Total time is :"<<h<<":"<<m<<":"<<s<<"Hrs\n";
    }
}

void prnvalues(Time &t1)
{
    cout<<"hrs:"<<t1.gethrs()<<"\n";
    cout<<"mins:"<<t1.getmins()<<"\n";
    cout<<"secs:"<<t1.getsecs()<<"\n";
    cout<<"Total secs:"<<t1.tot_secs<<"\n";
}

int main()
{
    Time tm1, tm2; //two objects of time created
    tm1.gettime(15,13,27); //get tm1
    tm2.gettime(7,48,38); //get tm2
    cout<<"Enter h to convert in hours format, pfor am/pm format: ";
    char ch;
    cin>>ch;
    cout<<"Convert time are:\n";
    cout<<"Time 1:";
    tm1.convert(tm1,ch);
    cout<<"Time 2:";
    tm2.convert(tm2,ch);
    tm1.sum(tm1,tm2);
    prnvalues(tm2);
    return 0;

    return 0;
}