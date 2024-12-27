#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

const double PI = 3.1415926535;
const double E = 2.7182818284;
const double h = 0.025;
const double x_start = -3.0;
const double x_end = 1.5;
const int functions_per_row = 4;
const int elements_per_row = functions_per_row * 2;
const int rows_per_page = 11;
const int argument_width = 10;
const int function_width = 12;
const int table_line_width = (argument_width + function_width) * functions_per_row + (elements_per_row + 1);


double function(double x, double p) {
    if (pow(x, 5) > pow(E, abs(p * x))) {
        return (1 - pow(atan(p * x), 4)) / (sqrt(x));
    }
    return log(PI + abs(p * x));
}

string format_number(double value, int precision, bool scientific_flag = false) {
    stringstream ss;

    if (scientific_flag) {
        ss << scientific << setprecision(precision) << value;
    } else {
        ss << fixed << setprecision(precision) << value;
    }
    return ss.str();
}


void print_head() {
    cout << "!";

    for (int i = 0; i < elements_per_row; i++) {
        int title_width = function_width - 8;
        if (i % 2 == 0) {
            int title_width = argument_width - 8;
            cout << string(title_width / 2, ' ') << "Аргумент" << string(title_width / 2, ' ') <<  "!";
        } else {
            int title_width = function_width - 7;
            cout << string(title_width / 2, ' ') << "Функция" << string(title_width / 2 + 1, ' ') <<  "!";
        }
    }

    cout << endl;
}

void print_row(double row_x[], double p) {
    cout << "!";

    for (int i = 0; i < functions_per_row; i++) {
        double x = row_x[i];

        if (x <= x_end + 1e-6) {
            string string_x = format_number(x, 4);
        
            int argument_length = string_x.length();
            int argument_padding = (argument_width - argument_length) / 2;

            cout << string(argument_padding, ' ') << string_x << string(argument_width - argument_length - argument_padding, ' ') << "!";


            string string_function = format_number(function(x, p), 4, true);
            
            int function_length = string_function.length();
            int function_padding = (function_width - function_length) / 2;

            cout << string(function_padding, ' ') << string_function << string(function_width - function_length - function_padding, ' ') << "!";
        } else {
            cout << string(argument_width, ' ') << "!";
            cout << string(function_width, ' ') << "!";
        }
    }
    cout << endl;
}


void print_line() {
    for (int i = 0; i < table_line_width; i++) {
        cout << "-";
    }
    cout << endl;
}

void print_page(double p, double start_x, int page) {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    print_line();
    cout << "Таблица значений функции" << endl;
    cout << "При параметре p = " << p << endl;
    cout << "Страница " << page + 1 << endl;

    print_line();
    print_head();

    for (int i = 0; i < rows_per_page; ++i) {
        double row_start_x = start_x + i * h * functions_per_row;

        double row_x[elements_per_row];

        for (int j = 0; j < functions_per_row; j++) {
            double x = row_start_x + h * j;
            row_x[j] = x;
        }

        print_row(row_x, p);
    }
    print_line();
}


int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double p;
    int total_items = (x_end - x_start) / h;
    int total_pages = (total_items + (rows_per_page * functions_per_row) - 1) / (rows_per_page * functions_per_row);

    do {
        cout << "Введите значение p на отрезке [-3, 3]: ";
        cin >> p;
    } while (abs(p) > 3);

    cin.ignore();

    cout << "Всего элементов: " << total_items << endl;
    cout << "Всего страниц: " << total_pages << endl;

    double current_x = x_start;
    int page = 0;

    do {
        print_page(p, current_x, page);
        current_x += rows_per_page * h * functions_per_row;
        page++;

        cout << "Нажмите Enter для продолжения...";
        cin.get();

    } while (page < total_pages);

    return 0;
}
