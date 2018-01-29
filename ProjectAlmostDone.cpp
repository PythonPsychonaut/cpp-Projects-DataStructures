// Created by Blake Blackwell January 27, 2018. First Project for DataStructures
#include <iostream>
using namespace std;

enum compare {LESS, EQUAL, GREATER};

class name {

    public:
        name(string a) {
            first = a;
        }

        name(string a, string b) {
            first = a;
            last = b;
        }

        name(string a, string b, string c) {
            first = a;
            middle = b;
            last = c;
        }

        string getFullName() {
            string final = first;
            if(middle != "") {
                final += " " + middle;
            }
            if(last != "") {
                final += " " + last;
            }

            return final;
        }

        string getNameComponent(int a) {
            switch(a) {
                case 1:
                    return first;
                case 2:
                    return middle;
                case 3:
                    return last;
            }
        }
    private:
        string first, middle, last;
};

class address{
public:
  address (string a){
    houseNumber = a;
  }
  address (string a, string b){
    houseNumber = a;
    streetName = b;
  }
  address (string a, string b, string c){
    houseNumber = a;
    streetName = b;
    city = c;
  }
  address (string a, string b, string c, string d){
    houseNumber = a;
    streetName = b;
    city = c;
    State = d;
  }
  address (string a,string b, string c, string d, string e){
    houseNumber = a;
    streetName = b;
    city = c;
    State = d;
    ZipCode = e;
  }
  string getFullAddress(){
    string final = houseNumber;
    if(streetName != ""){
      final += " " + streetName;
    }
    if (city != ""){
      final += " " + city;
    }
    if (State != ""){
      final += " " + State;
    }
    if (ZipCode != ""){
      final += " " + ZipCode;
    }

    return final;
  }

private:
  string houseNumber, streetName, city, State, ZipCode; //TODO Add State to Class and private function
};



//TODO add time Class

class clocktime {
    public:
        clocktime() {
            hour = 12;
            minute = 0;
        }

        clocktime(int a) {
            hour = (a > 0 && a <= 12) ? a : 12;
            minute = 0;
        }

        clocktime(int a, int b) {
            hour = (a > 0 && a <= 12) ? a : 12;
            minute = (b > 0 && b <= 60) ? b : 0;
        }


        int getTimeComponent(int a) {
            switch(a) {
                case 1:
                    return hour;
                case 2:
                    return minute;
            }
        }

        compare comparedTo(clocktime a) {

            if(hour > a.getTimeComponent(1)) {
                return GREATER;
            } else if(hour == a.getTimeComponent(1)) {
                if(minute > a.getTimeComponent(2)) {
                    return GREATER;
                } else if(minute == a.getTimeComponent(2)) {
                    return EQUAL;
                }
            }

            return LESS;
        }

    private:
        int hour, minute;
};





int main() {
string queue = "*** Next person's data ***";
string timeComparison = "*** Time Comparision values ***";
string timeInfo = " 0 = less, 1 = equal, 2 = greater ";



    name Kitty("Blake", "William", "Blackwell");
    cout << Kitty.getFullName() << endl;

    address Scorpion("317", "Oxford Place", "Macungie", "18062");
    cout << Scorpion.getFullAddress() << endl;

    cout << queue << endl;


    name BPS("Broadway", "Pixels", "");
    cout << BPS.getFullName() << endl;

    address SSP("711", "Spring Street", "Wyomissing", "Pennsylvania", "19610");
    cout << SSP.getFullAddress() << endl;


    cout << queue << endl;

    name LCCC("Lehigh Carbon", "Community", "College");

    cout << LCCC.getFullName() << endl;

    address Skool("4525", "Education Park Dr", "Schnecksville", "Pennyslvania" , "18078");
    cout << Skool.getFullAddress() << endl;

    clocktime cats(13, 30); // 1:30 pm

    clocktime timeOne(2, 12); // 2:12 am

    clocktime timeTwo(13, 30); // 1:30 pm

    cout << timeComparison << endl;

    cout << timeInfo << endl;


    cout << cats.comparedTo(timeOne) << endl;
    cout << timeOne.comparedTo(cats) << endl;
    cout << timeTwo.comparedTo(timeTwo) << endl;

    // 0 = less
    // 1 = equal
    // 2 = greater

}
