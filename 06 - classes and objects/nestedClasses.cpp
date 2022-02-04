#include <bits\stdc++.h>
using namespace std;

class Outer {
    int a;
    class Inner{
            int b;
        public:
            int c;
            void prn(void)
            {
                cout<<"\n"<<"Inner::prn()"<<"\n";
                cout<<b<<" "<<c<<"\n";
            }
            Inner()
            {
                b = 5;
                c = 10;
            }
    };
        Inner ob1;
    public:
        Inner ob2;
        void second(void)
        {
            cout<<"\n"<<"Outer::second()"<<"\n";
            cout<<ob2.c<<" "<<"\n";
            cout<<"A = "<<a<<"\n";
            ob1.prn();
        }
        Outer()
        {
            a = 25;
        }
};

int main()
{
    Outer ab;
    ab.second();
    ab.ob2.prn();
    return 0;
}