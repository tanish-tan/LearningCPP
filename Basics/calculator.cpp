#include <iostream>
#include <iomanip>

int main(void)
{

    std::cout << "****** CALCULATOR ******" << '\n';

    int num1 = 0;
    int num2 = 0;
    char op;
    double result = 0;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    std::cout << "Enter one of these operations (+, -, /, *, %): ";
    std::cin >> op;

    std::cout << std::fixed << std::setprecision(2);

    switch(op)
    {
        case '+':
        result = num1 + num2;
        std::cout << result << std::endl;
        break;

        case '-':
        result = num1 - num2;
        std::cout << result << std::endl;
        break;

        case '/':

        if(num2 != 0)
        {
        result = static_cast<double> (num1) / num2; // can also use (double) num 1 / num2; but prefer the one written instead of C-cast styles.
        std::cout << result << std::endl;
        }

        else
        {
            std::cout << "Cannot divide by zero.\n";
        }

        break;

        case '*':
        result = num1 * num2;
        std::cout << result << std::endl;
        break;

        case '%':

        if(num2 != 0)
        {
        result = num1 % num2;
        std::cout << result << std::endl;
        }

        else
        {
        std::cout << "Cannot modulo by zero.\n";
        }

        break;

        default:
        std::cout << "Invalid input from user." << std::endl;
        break;
    }

    return 0;
}
