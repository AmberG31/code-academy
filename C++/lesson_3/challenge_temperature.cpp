#include <iostream>
// formula C=(F−32)/1.8

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  
std::cout << "Enter the temperature in Fahrenheit: ";
 
std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}

// in the terminal ---->
// $ g++ temperature.cpp -o temp
// $ ./temp
// Enter the temperature in Fahrenheit: 77
// The temp is 25 degrees Celsius.