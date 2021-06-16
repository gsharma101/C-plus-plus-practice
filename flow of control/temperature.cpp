#include <bits/stdc++.h>
using namespace std;
/*Temperature converter program that gives 
the user the option of convrter Fahrenheit to 
celsins or celsius to Fahrenheit  depending upon 
the user users choice carries out the conversion*/
int main()
{
     int choice;
     double temp, conv_temp;
     cout << "Temperature Conversion Menu"
          << "\n";
     cout << "1. Fahrenheit to Celsius"
          << "\n";
     cout << "2. Celsius to Fahrenheit"
          << "\n";
     cout << "Enter your choice (1-2):"
          << "\n";
     cin >> choice;
     if (choice == 1)
     {
          cout << "\n"
               << "Enter temperature in Fahrenheit:";
          cin >> temp;
          conv_temp = (temp - 32) / 1.8;
          cout << "The temperature in Celsius "
               << conv_temp
               << "\n";
     }
     else
     {
          cout << "\n"
               << "Enter temperature in Celsius:";
          cin >> temp;
          conv_temp = (1.8 * temp) + 32;
          cout << "The temperature in Fahrenheit" << conv_temp << "\n";
     }
     return 0;
}