#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void print_row(int num, string expression, double result) {
    std::cout << std::left
    << "| "  << std::setw(5) << num 
    << " | "  << std::setw(15) << expression 
    << " | "  << std::setw(15) << result 
    << " |" << std::endl;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int x = 2;
    int y = 5;
    double z;

    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|   №   |    Выражение    |    Результат    |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    z = 2 / 5;
    print_row(1, "z = 2/5", z);

    z = 2.0 / 5;
    print_row(2, "z = 2./5", z);

    z = 2 / 5.0;
    print_row(3, "z = 2/5.", z);

    z = x / 5;
    print_row(4, "z = x/5", z);

    z = x / 5.0;
    print_row(5, "z = x/5.", z);

    z = x / y;
    print_row(6, "z = x/y", z);

    z = static_cast<double>(x) / 5;
    print_row(7, "z = double(x)/5", z);

    z = x / static_cast<double>(y);
    print_row(8, "z = x/double(y)", z);

    z = 2 % 5;
    print_row(9, "z = 2%5", z);

    z = y % x;
    print_row(10, "z = y%x", z);

    std::cout << "---------------------------------------------" << std::endl;

    return 0;
}