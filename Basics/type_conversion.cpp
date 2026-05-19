#include <iostream>

int main(void)
{

    int x = 3.14;

    std::cout << x << '\n'; // will show 3 and truncate the .14, implicit type conversion.

    int letter = (int) 'a';

    std::cout << letter << '\n'; // will show integer value of a according to ASCII table.
    
    return 0;
}