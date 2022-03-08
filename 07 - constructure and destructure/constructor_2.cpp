#include <bits\stdc++.h>
using namespace std;

class Test
{
		int a;
		char b;
	public:
		Test(int i, char j) // This is not a default constructor
		{
				a = i;
				b = j;
		}
		:
};

int main()
{
		Test Tarray[5]; // will give error as array can't be created
										// because default constructor is not available

		Test newobj(31, 'z'); // THis statement is OK as corresponding
													// Constuctor accepting arguments is avilable
                                                    
}