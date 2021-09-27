#include <bits\stdc++.h>
using namespace std;

int main(){
    int *Val,*Rsum,*Csum;
    int MaxR, MaxC,i,j;
    cout<<"Enter dimentions (row col):";
    cin>>MaxR>>MaxC;
    Val = new int[MaxR * MaxC]; // ? actually 2-D array
    Rsum = new int[MaxR];   // ? array to hold row sums
    Csum = new int[MaxC];   // ? array to gold col sums
    for(i = 0;i<MaxR;++i){
        cout<<"\n Enter elements of row "<<i+1<<":";
        Rsum[i] = 0;
        for(j = 0; j<MaxC; ++j)
        {
            cin>>Val[i * MaxC + j];
            Rsum[i] += Val[i * MaxC + j];
        }
    }

    for(j = 0;j<MaxC;++j){
        Csum[j] = 0;
        for(i = 0; i<MaxR; ++i)
        {
            Csum[j] += Val[i * MaxC + j];
        }
    }
    cout<<"\n\\n The give arry along with Rowsum and Colsum is: \n\n";

    for(i=0;i<MaxR;++i)
    {
        for(j = 0; j<MaxC; ++j)
        {
            cout<<Val[i * MaxC + j]<<'\t';
        }
        cout<<Rsum[i]<<"\n";
    }

    for(j = 0; j < MaxC; ++j)
    {
        cout<<Csum[j]<<'\t';
    }
    cout<<"\n";
    return 0;
}