#include <bits/stdc++.h>
using namespace std;
// ! Program to print whether a given character is an uppercase or a lowercase character or a digit or any other character. Use ASCII code for it
int main()
{
    char ch;
    cout << "Enter a character"
         << "\n";
    cin >> ch;
    if (ch >= 48 && ch <= 57)
    {
        cout << "\n"
             << "You entered a digit";
    }
    else if (ch >= 65 && ch <= 122)
    {
        cout << "\n"
             << "You entered an uppercase character";
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "\n"
             << "You entered a lowercase charcater";
    }
    else
    {
        cout << "\n"
             << "You entered a special character";
    }

    return 0;
}