#include <bits\stdc++.h>
using namespace std;
class X {
        int codeno;
        float price;
        static int count;
    public:
        void getdata(int i, float j){
            codeno = i;
            price = j;
            ++count;
        }

        void display()
        {
            cout<<"Code no:"<<codeno<<"\n";
            cout<<"Price:"<<price<<"\n";
        }
        static void displcount(void)
        {
            cout<<"count="<<count<<"\n";
        }
};
int X::count = 0;

int main()
{
    X ob1,ob2;
    ob1.getdata(101,25.12);
    ob2.getdata(102,38.19);
    X::displcount();
    X ob3;
    ob3.getdata(103,49.00);
    X::displcount();
    ob1.display();
    ob2.display();
    ob3.display();
}