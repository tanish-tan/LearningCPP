#include <iostream>

int main(void)
{

    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12)
    {
        std::cout << "Your name cannot be over 12 characters.\n";
    }

    else 
    {   
        std::cout << "Valid name.\n";
    }

    return 0;
}