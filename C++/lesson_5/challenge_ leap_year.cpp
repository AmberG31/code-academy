#include <iostream>

// Takes a year as input.
// Checks to see if the year is a four-digit number.
// Displays whether or not the year falls on a leap year.
// There are 3 criteria that must be taken into account to identify a leap year:

// If the year can be evenly divided by 4 then it is a leap year, however…
// If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
// If that year is evenly divisible by 400, then it is a leap year.

bool leapYear(int year) {
    if (year % 4 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return true;
    } else if (year % 100 == 0 &&  year % 400 != 0) {
        return false;
    } else {
        return false;
    }
}

int main() {

    int year;

    std::cout << "Please enter the year in YYYY format \n";
    std::cin >> year;

    if (year >= 1000 && year <= 9999) {
        if (leapYear(year)) {
            std::cout << year << " is a leap year. \n";
        } else {
            std::cout << year << " is not a leap year. \n";
        }
    } else {
        std::cout << "Please enter a valid four digits number. \n";
    }
};