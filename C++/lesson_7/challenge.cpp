// Write a program to find the sum of even numbers and the product of odd numbers in a vector.

// For example:
// Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

// Then the program should output:
// Sum of even numbers is 12
// Product of odd numbers is 27

#include <iostream>
#include <vector>

int main() {
  std::vector<double> input_vector;
  double num;

  std::cout << "Enter numbers (type any non-numeric character to stop)";
  while (std::cin >> num) {
    input_vector.push_back(num);
  }

  int sum_even = 0;
  int product_odd = 1;

  for (int num : input_vector) {
    if (num % 2 == 0) {
      sum_even += num;
    } else {
      product_odd *= num;
    }
  }
  std::cout << "Sum of even numbers is " << sum_even << std::endl;
  std::cout << "Product of odd numbers is " << product_odd << std::endl;

}
