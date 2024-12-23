#include <iostream>
#include <iomanip>

int main() {

    double x = 829.356;
    double y = 128.286;

    std::cout << "1) " << x << " + " << y << " = " << (x + y) << std::endl;

    std::cout << "2) " << std::scientific << std::setprecision(6) << x << std::endl;

    std::cout << "3) " << std::scientific << std::setprecision(2) << y << std::endl;

    std::cout << "4) " << std::fixed << std::setprecision(2) << x << std::endl;

    std::cout << "5) " << std::fixed << std::setprecision(3) << std::setw(13) << std::setfill(' ') << y << std::endl;

    return 0;
}