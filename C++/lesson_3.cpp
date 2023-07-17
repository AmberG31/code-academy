#include <iostream>

int main() {
  
  // Declare a variable   
  int year = 2019;
  
  // Initialize a variable
  
}


int main() {

  int score = 0;

  // Change score here:
  
  score = 1234 * 99;
  
std::cout<<score<<"\n";

}
//  in the terminal: ->>>>>
// C++ git:(main) ✗ g++ lesson_3.cpp -o score
// ➜  C++ git:(main) ✗ ./score                  
// 122166

//Chaining
int main() {
  
  int score = 0;
  
  // Output
  std::cout << "Player score: " << score << "\n";
}
//  in the terminal: ->>>>>
// $ g++ game.cpp
// $ ./a.out
// Player score: 0

//User input
int main() {
  
  int tip = 0;
  
  std::cout << "Enter tip amount: ";
  
  std::cin >> tip;
  
  std::cout << "You paid " << tip << " dollars." << "\n";
}

//  in the terminal: ->>>>>
// $ g++ tip.cpp
// $ ./a.out
// Enter tip amount: 5
// You paid 5 dollars.