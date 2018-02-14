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
