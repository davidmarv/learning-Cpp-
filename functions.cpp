#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!\n";
}
void function(string country = "Norway") {
  cout << country << "\n";
}


void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}


int main() {
  myFunction();
  myFunction();
  myFunction();

    function("Sweden");
  function("India");
  function();
  function("USA");


  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  
  return 0;
}
