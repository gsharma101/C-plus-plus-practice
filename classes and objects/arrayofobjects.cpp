// ! Program to illustrate the use of array of objects by storing details of 10 items in an array of objects.
#include <bits\stdc++.h>
using namespace std;

class Item {
    int itemno;
    float price;
public:
    void getdata(int i, float j)
    {
        itemno = i;
        price = j;
    }

    void putdata(void)
    {
        cout<<"itemno: "<<itemno<<"\t";
        cout<<"Proce: "<<price<<"\n";
    }
};

const int size = 5;
Item order[size]; //? See an object rray namely order of item class type has been created here

int main(){
    int ino,a;
    float cost;
    //get values for all items
    for(a = 0; a<size; ++a)
    {
        cout<<"Enter itemno && proce for the item"<< a + 1 <<"\n";
        cin>>ino>>cost;
        order[a].getdata(ino,cost); //invoking gtedata() for a particular
    }                              // object with the given values
    // Print Data
    for(a = 0; a<size; ++a)
    {
        cout<<"Item "<<a+1<<"\n";
        order[a].putdata();
    }
    return 0;
}