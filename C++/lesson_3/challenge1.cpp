// Create a program that takes in the weight of an item and then calculates how much that item would weigh on Mars.

#include <iostream>

int main() {
  // Add your code below  
double itemWeight;
double weightOnMars;

std::cout << "Enter intem's weight on Earth ";
std::cin >> itemWeight;

weightOnMars = (itemWeight/9.81) * 3.711;

std::cout << "The weight on Mars is " << weightOnMars << "kg";
}