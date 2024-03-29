#include <iostream>
using namespace std;

template <class T>
T Min(T num1, T num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}

template <class T>
T Max(T num1, T num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int main()
{
	int inum1, inum2, result;
	double dnum1, dnum2;
	string ch1, ch2;

	
	cout << "Enter two integer values:\n";
	cin  >> inum1 >> inum2;
	
	cout << "Lesser: " <<  Min(inum1, inum2) << endl;
	cout << "Greater: " << Max(inum1, inum2) << endl;


	cout << "Enter two float values:\n";
	cin  >> dnum1 >> dnum2;
	
	cout << "Lesser: " << Min(dnum1, dnum2) << endl;
	cout << "Greater: " << Max(dnum1, dnum2) << endl;

	
	cout << "Enter two strings values:\n";
	cin >> ch1 >> ch2; 
	
	cout << "Lesser: " << Min(ch1, ch2) << endl;
	cout << "Greater: " << Max(ch1, ch2) << endl;

	return 0;
}
