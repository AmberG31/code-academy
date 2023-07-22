#include <iostream>

int main() {
  
  int hunger = true;
  int anger = true;
  
  if (hunger && anger) {
    std::cout << "Hangry";
  }
}

int main() {
  
  int day = 6;
    
    if (day == 6 || day == 7) {
     std::cout << "Weekend";
    }
}

int main() {
  
  bool logged_in = false;
    
  if (!logged_in) {
    std::cout << "Try again";
  }
}