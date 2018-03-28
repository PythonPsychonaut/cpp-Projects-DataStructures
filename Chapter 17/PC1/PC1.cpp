#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;
	double input;

	list.add(2.5);
	list.add(4.8);
	list.add(1.3);
	list.add(4.7);

	cout << "Enter a float to test for membership in the List: ";
	cin  >> input;

	if (list.isMember(input))
		cout << "The double \"" << input << "\" is a member of the list.\n" << endl;
	else
		cout << "The double \""<< input << "\" is not a member of the list.\n" << endl;

	return 0;
}