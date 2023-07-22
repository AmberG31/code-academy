#include <iostream>

// Write a 99bottles.cpp program that prints the verses of the “99 Bottles” song. Each stanza goes something like this:

// i bottles of pop on the wall.
// Take one down and pass it around.
// i-1 bottles of pop on the wall.

int main() {
  
  for (int i = 99; i > 0; i--){
    std::cout << i << " bottles of pop on the wall.\n" << "Take one down and pass it around.\n" << i-1 << " bottles of pop on the wall.\n";
  }
}