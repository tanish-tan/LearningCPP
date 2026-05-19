#include <iostream>

int main(void)
{
    
    std::string name;
    int age;
    
    std::cout << "What's your name?" << '\n';
    std::getline(std::cin >> std::ws, name); // so that we can get a string as an input.
    // the std::ws makes sure the whitespace is cleared before the input is taken.

    std::cout << "What's your age?" << '\n';
    std::cin >> age;

    std::cout << "Your name is " << name << ".\n";
    std::cout << "Your age is " << age << ".\n";

    return 0;
}