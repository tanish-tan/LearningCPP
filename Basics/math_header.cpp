#include <iostream>
#include <cmath> // for all math related functions
#include <algorithm> // specifically for min and max

int main(void)
{
    double x = 3.14;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << "max: " << z << '\n';

    z = std::min(x, y);
    std::cout << "min: " << z << '\n';

    z = pow(2, 4);
    std::cout << "pow: " << z << '\n';

    z = sqrt(9);
    std::cout << "sqrt: " << z << '\n';

    z = abs(-3);
    std::cout << "abs: " << z << '\n';

    z = round(x);
    std::cout << "round: " << z << '\n';

    z = ceil(x);
    std::cout << "ceil: " << z << '\n';

    z = floor(x);
    std::cout << "floor: " << z << '\n';

    return 0;
}
