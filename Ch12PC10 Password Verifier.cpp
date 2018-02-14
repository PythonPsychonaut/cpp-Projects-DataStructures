// Password must be atleast 6 characters long
//Contain atleast on uppercase and one lowercase letter
//Password must have atleast one digit
//Program should tell user why password no accepted, for example Password must contain atleast one digit
#include <iostream>

using namespace std;

int main() {
string userPasswd;

cout << "Enter your password: " << endl;
cin >> userPasswd;

if (userPasswd.length() < 6)
{
    cout << "***Your password must have atleast SIX characters!***" << endl;
}
else {
    cout << "Password accepted!";
};
}
