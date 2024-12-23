#include <iostream>
#include <iomanip>


int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    std::string name;

    std::cout << "Как вас зовут? Введите здесь: ";
    std::cin >> name;

    std::cout << std::setw(40) << std::right << "Привет, " << name << "!" << std::endl;

    return 0;
}