//Recursive Array Sum
#include <iostream>
using namespace std;


int arraySum(int *, int);

int main()
{
	int size;
	int *array;

	cout << "How many figures do you wish to add? ";
	cin  >> size;

	array = new int[size]; 

	cout << "Enter each of the figures to sum:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "figure " << (i + 1) << ": ";
		cin  >> array[i];
	}

	cout << arraySum(array, size) << endl;

	delete [] array;
	array = 0;
	return 0;
}


int arraySum(int *array, int size)
{
	if (size == 0)
		return 0;
	else
		return  array[size - 1] + arraySum(array, size - 1);
}
