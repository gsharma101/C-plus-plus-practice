#include <bits/stdc++.h>
//?program to accept the integer and print the largest of the three. Make use of only if statement
using namespace std;

int main()
{
    int x, y, z, max;
    cout << "Enter three numbers\n";
    cin >> x >> y >> z;
    max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    cout << "\n"
         << "The largest of " << x << ", "
         << y << " and " << z << " is " << max;
    return 0;
}