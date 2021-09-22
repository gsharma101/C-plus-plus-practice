#include <bits\stdc++.h>
using namespace std;
// To claculate the factorial of any number
int main(){
  int i,num,fact=1;
  cout<<"Enter any number\n";
  cin>>num;
  i = num;
  while(num){
      fact *= num;
      --num;
  }
  cout<<"The factorial of "<<i<<" is "<<fact;
}