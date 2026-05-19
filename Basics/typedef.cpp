#include <iostream>
#include <vector>

// typedef makes it easier for us to not have to repeat long data types again and again and instead, give an alias name to it

typedef std::vector<std::pair<std::string, int>> pairlist_t; // just an example

// typedef std::string text_t;

using text_t = std::string; // use using instead of typedef because it works better with templates.

int main(void)
{

    pairlist_t pairlist;

    text_t firstName = "Tanish";    

    std::cout << firstName << '\n';

    return 0;
}