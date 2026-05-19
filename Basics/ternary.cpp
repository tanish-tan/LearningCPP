#include <iostream>

// ternary operator is replacement of if/else == ?:
    
int main(void)
    {
    
        std::string name;
    
        std::cout <<"Are you stupid? (Yes/No): ";
        std::cin >> name;
    
        (name == "Yes" || name == "yes") ? std::cout << "You are stupid.\n" : std::cout << "You're still stupid even if you said no.\n";
        
        return 0;
    }