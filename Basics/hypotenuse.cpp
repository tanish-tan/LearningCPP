#include <iostream>
#include <cmath>
#include <iomanip> // for setprecision()

int main(void)
{

    double a = 0;
    double b = 0;
    double c = 0;

    std::cout << "Enter side a: ";
    std::cin >> a;

    std::cout << "\nEnter side b: ";
    std::cin >> b;

    a *= a;
    b *= b;
    
    c = sqrt(a + b);

    std::cout << std::fixed << std::setprecision(2); // setting upto 3 demical places.
    // the std::fixed converts it from scientific or floating values to fixed decimals.

    std::cout << "The hypotenuse of the triangle with side " << a <<  " and side " << b << " is " << c << " units." << std::endl;

    return 0;
}