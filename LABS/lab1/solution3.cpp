#include <iostream>
#include <iomanip>


int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double x;
    double y;
    int width;
    int precission;
    double z;

    std::cout << "Введите X ";
    std::cin >> x;

    std::cout << "Введите Y ";
    std::cin >> y;

    std::cout << "Введите количество позиций ";
    std::cin >> width;

    std::cout << "Введите количество знаков после запятой ";
    std::cin >> precission;
    
    std::cout << std::fixed << std::setprecision(precission);

    std::cout << std::setw(width) << x << std::endl;
    std::cout << std::setw(width) << y << std::endl;

    std::cout << std::setw(width) << x + y << std::endl;
    std::cout << std::setw(width) << x - y << std::endl;
    std::cout << std::setw(width) << x * y << std::endl;

    if (y != 0) {
        std::cout << std::setw(width) << x / y << std::endl;
    } else {
        std:: cout << std::setw(width) << 0 << std::endl;
    }
}