#include <bits\stdC++.h>
using namespace std;

class Students
{
    int roll;
    public:
        Students() //! Constructor Function
        {
            roll = 0;
        }
        void getRoll(void) //! Member Function
        {
            cout<<"You are at current rollno "<<roll;
        }
};

int main(){

    Students ob1;
    ob1.getRoll();
    return 0;
}