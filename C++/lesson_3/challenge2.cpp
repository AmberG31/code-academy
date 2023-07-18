// Create a program that asks for a distance in miles as input. The program will then output how much that distance is in kilometers.

#include <iostream>

int main() {
    double miles;
    double kilometers;

    std::cout << "Enter the distance in miles: ";
    std::cin >> miles;

    kilometers = miles * 1.6;

    std::cout << miles << " in kilometers is " << kilometers;
}