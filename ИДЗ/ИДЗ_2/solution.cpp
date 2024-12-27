#include <iostream>
#include <string>

using namespace std;


struct Table {
    double** data = nullptr;
    int rows;
    int cols;
};


int input_positive_integer(string title) {
    int integer;
    do {
        cout << title;
        while (!(cin >> integer)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка ввода. Попробуйте снова: ";
        }
        if (integer <= 0) {
            cout << "Введите положительное число: ";
        }
    } while (integer <= 0);

    return integer;
}

double input_double(string title) {
    cout << "Введите " << title;
    double double_num;
    while (!(cin >> double_num)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка ввода. Попробуйте снова: ";
    }
    return double_num;
}


void init_table(Table& table) {
    table.rows = input_positive_integer("Введите количество строк: ");
    table.cols = input_positive_integer("Введите количество столбцов: ");
    table.data = new double*[table.rows];
    for (int i = 0; i < table.rows; ++i) {
        table.data[i] = new double[table.cols];
    }
}


void clear_table(Table& table) {
    if (table.data) {
        for (int i = 0; i < table.rows; ++i) {
            delete[] table.data[i];
        }
        delete[] table.data;
        table.data = nullptr;
    }
    table.cols = 0;
    table.rows = 0;
}


void print_line() {
    cout << "------------------------------------------------------------" << endl;
}

void print_end() {
    print_line();
    cout << "Выход" << endl;
}


void print_menu() {
    print_line();
    cout << "Меню:" << endl;
    cout << "1. Заполнить таблицу случайно" << endl;
    cout << "2. Заполнить таблицу вручную" << endl;
    cout << "3. Показать таблицу" << endl;
    cout << "4. Найти минимальный среди максимальных элементов столбцов таблицы" << endl;
    cout << "5. Выйти" << endl;
}


void print_error_choice() {
    print_line();
    cout << "Некорректный выбор. Попробуйте снова." << endl;
}

void generate_table(Table& table) {
    print_line();
    for (int i = 0; i < table.rows; ++i) {
        for (int j = 0; j < table.cols; ++j) {
            table.data[i][j] = (rand() % 1000) / 10.0;
        }
    }
    cout << "Таблица заполнена случайными числами." << endl;
}


void fill_table(Table& table) {
    print_line();

    for (int i = 0; i < table.rows; ++i) {
        for (int j = 0; j < table.cols; ++j) {
            double value = input_double("Введите элемент (" + to_string(i + 1) + ", " + to_string(j + 1) + "): ");
            table.data[i][j] = value;
        }
    }

    cout << "Заполнение таблицы завершено." << endl;
}


void display_table(const Table& table) {
    print_line();
    cout << "Таблица:" << endl;
    for (int i = 0; i < table.rows; ++i) {
        for (int j = 0; j < table.cols; ++j) {
            cout << table.data[i][j] << "\t";
        }
        cout << endl;
    }
}


void find_min_max_columns(const Table& table) {
    print_line();

    if (table.rows <= 0 || table.cols <= 0) {
        cout << "Ошибка: таблица пуста или некорректна." << endl;
        return;
    }

    double result = INFINITY;

    for (int j = 0; j < table.cols; ++j) {
        double max_col_value = -INFINITY;
        for (int i = 0; i < table.rows; ++i) {
            max_col_value = max(max_col_value, table.data[i][j]);
        }
        result = min(result, max_col_value);
    }

    cout << "Минимальный среди максимальных элементов столбцов: " << result << endl;
    return;
}


void program_loop(Table& table) {
    int choice;

    do {
        print_menu();
        choice = input_positive_integer("Выберите опцию: ");

        if (choice == 1) {
            generate_table(table);
        } else if (choice == 2) {
            fill_table(table);
        } else if (choice == 3) {
            display_table(table);
        } else if (choice == 4) {
            find_min_max_columns(table);
        } else if (choice == 5) {
            print_end();
        } else {
            print_error_choice();
        }
    } while (choice != 5);
}


int main() {
    setlocale(LC_ALL, "ru_RU.utf-8");

    Table table;

    init_table(table);

    program_loop(table);

    clear_table(table);

    return 0;
}
