#include <bits\stdc++.h>
using namespace std;

int main(){
   float area,rad,len,bre,a,b,c,s;
   int ch;
   cout<<"Area Menu\n";
   cout<<"1. Circle\n";
   cout<<"2. Rectangle\n";
   cout<<"3. Triangle\n";
   cout<<"\n Enter your choice (1-3) ";
   cin>>ch;
   switch(ch)
   {
      case 1: 
         cout<<"Enter radius of the circle: ";
         cin>>rad;
         area = 3.14 * rad * rad;
         cout<<"\n The area of the circle is "<<area<<"\n";
         break;
      case 2:
         cout<<"Enter enter the length and breadth of rectangle: ";
         cin>>len>>bre;
         area = len * bre;
         cout<<"\n The area of the rectangle is "<<area<<"\n";
         break;
       case 3:
         cout<<"Enter the three sides of Triangle: ";
         cin>>a>>b>>c;
         s = (a + b + c) / 2;
         area = sqrt(s*(s-a)*(s-b)*(s-c));
         cout<<"\n The area of the Triangle is "<<area<<"\n";
         break;
      default: cout<<"Wrong Choice!!!!";
               break;
   }
   return 0;
}