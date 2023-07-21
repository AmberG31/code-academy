// Write a space.cpp program that helps him keep track of his target weight by:

// It should ask him what his earth weight is.
// Ask him to enter a number for the planet he wants to fight on.
// It should then compute his weight on the destination planet.

// Here is the table of conversion:

// #	Planet	Relative Gravity
// 1	Mercury	0.38
// 2	Venus	0.91
// 3	Mars	0.38
// 4	Jupiter	2.34
// 5	Saturn	1.06
// 6	Uranus	0.92
// 7	Neptune	1.19

#include <iostream>

int main () {

    double weight;
    int planetNumber;

    std::cout << "What is your earth weight?\n";
    std::cin >> weight;

    std::cout << "Enter a number for the planet you want to fight on\n" << "1 - Mercury, 2 - Venus, 3 - Mars, 4 - Jupiter\n" << "5 - Saturn, 6 - Uranus, 7 - Neptune\n";
    std::cin >> planetNumber;
    
if (planetNumber == 1 || planetNumber == 3) {
    weight = weight * 0.38;
} else if ( planetNumber == 2) {
    weight = weight * 0.91;
} else if (planetNumber == 4) {
    weight = weight * 2.34;
} else if (planetNumber == 5) {
    weight = weight * 1.06;
} else if (planetNumber == 6) {
    weight = weight * .92;
} else if (planetNumber == 7) {
    weight = weight * 1.19;
};
    std::cout << "Your weight is " << weight << "\n";

}