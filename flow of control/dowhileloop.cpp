#include <bits\stdc++.h>
using namespace std;
int main(){
  char ch, ch1;
  float l,b,peri,area,diag;
  cout<<"\n Reactangle Menu";
  cout<<"\n 1. Area";
  cout<<"\n 2. Perimeter";
  cout<<"\n 3. Diagonal";
  cout<<"\n 4. Exit"<<"\n";
  cout<<"Enter your choice:";
  do{
      cin>>ch;
      if(ch=='1'||ch=='2'||ch=='3'){
          cout<<"Enter length & breadth:";
          cin>>l>>b;
      }
      switch(ch)
      {
          case'1': area = l*b;
                   cout<<"Area = "<<area;
                   break;
          case'2': peri = 2 * (l + b);
                   cout<<"Perimeter = "<<peri;
                   break;
          case'3': diag = sqrt((l * l) + (b + b));
                   cout<<"Diagonal = "<<diag;
                   break;
          case'4': cout<<"Breaking";
                   exit(0);
          default: cout<<"Wrong choice!!!!";
                   cout<<"Enter a valid one";
                   break;
      } //end the switch
      cout<<"\n Want to enter more (y/n)";
      cin>>ch1;
      if(ch1 == 'y' || ch1 == 'Y')
            cout<<"Again enter choice (1-4):";
  }while(ch1=='y'||ch1=='Y'); // end of do-while loop
  return 0;
}