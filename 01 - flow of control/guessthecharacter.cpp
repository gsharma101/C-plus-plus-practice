#include <bits/stdc++.h>
using namespace std;
// !Program to input a character and to print whetger a given character is an alphabet,digitor any other character
int main()
{
    char ch;
    cout << "Enter any character"
         << "\n";
    cin >> ch;
    if ((ch == 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        cout << "You entered an alphabet"
             << "\n";
    }
    else if ((ch >= '0') && (ch <= '9'))
    {
        cout << "You entered a digit"
             << "\n";
    }
    else
    {
        cout << "You entered a character other than alphabet and digit"
             << "\n";
    }
    return 0;
}