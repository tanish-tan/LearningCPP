#include <iostream>
#include <iomanip>

int main(void)
{

    double c;

    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> c;

    double f = (c * (9.0/5.0)) + 32;

    std::cout << c << "C in Fahrenheit is " << f << "F\n";

    double f1;
    
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> f1;

    double c1 = ((f1 - 32) * (5.0/9.0));

    std::cout << f1 <<"F in Celsius is " << c1 << "C\n"; 

    return 0;
}
