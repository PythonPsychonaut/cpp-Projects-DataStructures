#include <iostream>
using namespace std;

bool verifyPassword(string a) {
	bool hasUpper = false, hasNumber = false; // declare both false to prevent logic issues
	if(a.length() < 6) {
		return false;
	}

	for(int i = 0; i < a.length(); ++i) {
		if(isupper(a[i])) {
			hasUpper = true;
		}
		if(isdigit(a[i])) {
			hasNumber = true;
		}
	}

    if(hasUpper == true && hasNumber == true) {
        return true;
    }
	return false;
}


int main()
{
    
    string a;
    cout << "Enter your password: " << endl;
    cin >> a;
    cout << verifyPassword(a) << endl;
	
	
    // 0 is False
    //1 is True
}
