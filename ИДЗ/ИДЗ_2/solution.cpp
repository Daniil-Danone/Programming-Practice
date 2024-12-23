#include <iostream>
#include <string>

using namespace std;


struct Table {
    double** data = nullptr;
    int rows;
    int cols;
};


int inputPositiveInteger(string title) {
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

double inputDouble(string title) {
    cout << "Введите " << title;
    double doubleNum;
    while (!(cin >> doubleNum)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка ввода. Попробуйте снова: ";
    }
    return doubleNum;
}


void initTable(Table& table) {
    table.rows = inputPositiveInteger("Введите количество строк: ");
    table.cols = inputPositiveInteger("Введите количество столбцов: ");
    table.data = new double*[table.rows];
    for (int i = 0; i < table.rows; ++i) {
        table.data[i] = new double[table.cols];
    }
}


void clearTable(Table& table) {
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


void printLine() {
    cout << "------------------------------------------------------------" << endl;
}

void printEnd() {
    printLine();
    cout << "Выход" << endl;
}


void printMenu() {
    printLine();
    cout << "Меню:" << endl;
    cout << "1. Заполнить таблицу случайно" << endl;
    cout << "2. Заполнить таблицу вручную" << endl;
    cout << "3. Показать таблицу" << endl;
    cout << "4. Найти минимальный среди максимальных элементов столбцов таблицы" << endl;
    cout << "5. Выйти" << endl;
}


void printErrorChoice() {
    printLine();
    cout << "Некорректный выбор. Попробуйте снова." << endl;
}

void generateTable(Table& table) {
    printLine();
    for (int i = 0; i < table.rows; ++i) {
        for (int j = 0; j < table.cols; ++j) {
            table.data[i][j] = (rand() % 1000) / 10.0;
        }
    }
    cout << "Таблица заполнена случайными числами." << endl;
}


void fillTable(Table& table) {
    printLine();

    for (int i = 0; i < table.rows; ++i) {
        for (int j = 0; j < table.cols; ++j) {
            double value = inputDouble("Введите элемент (" + to_string(i + 1) + ", " + to_string(j + 1) + "): ");
            table.data[i][j] = value;
        }
    }

    cout << "Заполнение таблицы завершено." << endl;
}


void displayTable(const Table& table) {
    printLine();
    cout << "Таблица:" << endl;
    for (int i = 0; i < table.rows; ++i) {
        for (int j = 0; j < table.cols; ++j) {
            cout << table.data[i][j] << "\t";
        }
        cout << endl;
    }
}


void findMinOfMaxColumns(const Table& table) {
    printLine();

    if (table.rows <= 0 || table.cols <= 0) {
        cout << "Ошибка: таблица пуста или некорректна." << endl;
        return;
    }

    double result = INFINITY;

    for (int j = 0; j < table.cols; ++j) {
        double maxColValue = -INFINITY;
        for (int i = 0; i < table.rows; ++i) {
            maxColValue = max(maxColValue, table.data[i][j]);
        }
        result = min(result, maxColValue);
    }

    cout << "Минимальный среди максимальных элементов столбцов: " << result << endl;
    return;
}


void programLoop(Table& table) {
    int choice;

    do {
        printMenu();
        choice = inputPositiveInteger("Выберите опцию: ");

        if (choice == 1) {
            generateTable(table);
        } else if (choice == 2) {
            fillTable(table);
        } else if (choice == 3) {
            displayTable(table);
        } else if (choice == 4) {
            findMinOfMaxColumns(table);
        } else if (choice == 5) {
            printEnd();
        } else {
            printErrorChoice();
        }
    } while (choice != 5);
}


int main() {
    setlocale(LC_ALL, "ru_RU.utf-8");

    Table table;

    initTable(table);

    programLoop(table);

    clearTable(table);

    return 0;
}
