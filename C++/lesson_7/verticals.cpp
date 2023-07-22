#include <iostream>
#include <vector>

// adding and removing elements 

int main() {
  
  std::vector<std::string> last_jedi;
  
  // Add characters here:
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");

  std::cout << last_jedi[0] << " ";
  std::cout << last_jedi[1] << " ";
  std::cout << last_jedi[2] << " ";
  std::cout << last_jedi[3] << " ";

  last_jedi.pop_back();
  // std::cout << last_jedi[3] << " ";
  for (const std::string& jedi : last_jedi) {
    std::cout << jedi << " ";
  }

}