#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;

 fullName = firstName + " " + lastName;
  cout << fullName;

  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();


string myString = "Hello";
cout << myString[0];


myString[0] = 'J';
cout << myString;


string name;
cout << "Type your full name: ";
getline (cin, name);
cout << "Your name is: " << name;
  return 0;
}
