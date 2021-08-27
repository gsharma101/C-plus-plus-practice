#include <bits\stdc++.h>
using namespace std;

class Distance {
    int feet, inches;
    public:
        void getdata(int f, int i)
        {
            feet = f;
            inches = i;
        }

        void printit(void)
        {
            cout<<feet<<" feet "<<inches<<" inches"<<"\n";
        }
        Distance sum(Distance d2); // add Distance d2 to current Distaance objects
};

Distance Distance::sum(Distance d2)
{
    Distance d3; //creating object d3 of type Distance
    d3.feet = feet + d2.feet + (inches + d2.inches)/12;
    d3.inches = (inches + d2.inches)%12;
    return(d3);
}

int main()
{
    Distance Length1, Length2, total;
    Length1.getdata(17,6);
    Length2.getdata(13,8);
    total = Length1.sum(Length2); //eg total = Length1 + Length2
    cout<<"Length1:";
    Length1.printit();
    cout<<"Length2:";
    Length2.printit();
    cout<<"Total Length:";
    total.printit();
    return 0;
}