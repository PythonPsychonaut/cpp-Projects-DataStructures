#include <iostream>
#include<cstring>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    cout << "This program is used to check if an entered string is a palendrone. Cats is not a palendrone ;)" << endl;
    cout << "Enter a word to check: "; cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        cout << string1 << " is not a palindrone, a palendrone reads the same forwards and backwards, IE: radar." << endl; 
    }    
    else {
        cout << string1 << " is a palindrone" << endl; 
    }
}
