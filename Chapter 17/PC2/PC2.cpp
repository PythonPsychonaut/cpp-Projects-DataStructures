#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList List1;
	double input;
	
	for (int i = 0; i <= 5; i++)
	{
		List1.add(i * 1.3);
	}

	
	LinkedList List2(List1);

	cout << "Enter a value to test the second list for membership: ";
	cin  >> input;

	if (List2.isMember(input))
		cout << "\"" << input << "\" is a member of the second list.\n";
	else
		cout << "\"" << input << "\" is not a member of the second list.\n";
	return 0;
}