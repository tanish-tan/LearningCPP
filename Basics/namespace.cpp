#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main(void)
{
    
    int x = 0;

    std::cout << x << '\n';
    std::cout << first::x << '\n'; // :: this is called scope resolution
    std::cout << second::x << '\n';

    return 0;
}