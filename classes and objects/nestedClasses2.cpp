#include <bits\stdc++.h>
using namespace std;

class Outer{
    public: //! public section of the class outer
    int a;
    class Inner{
             int b; //! Provate by default
        public:
             int c;
             void prn(void)
             {
                 cout<<b*c;
             }
    };
    Inner ob1;
    void second(void){
        cout<<ob2.c * ob1.c;
        cout<<a*a*a;
    }
    private: //! Provate section of outer class
        Inner ob2;
};

int main(){
    Outer X;
    Outer::Inner Y;
    return 0;
}