#include <iostream>


using namespace std;


void generateTable(double** table, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            table[i][j] = (rand() % 1000) / 10.0;
        }
    }
}


void fillTable(double** table, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Введите элемент (" << i + 1 << ", " << j + 1 << "): ";
            cin >> table[i][j];
        }
    }
}


double findMinOfMaxColumns(double** table, int rows, int cols) {
    double minColsMaxValue = INFINITY;

    for (int j = 0; j < cols; ++j) {
        double maxColValue = FP_INFINITE;

        for (int i = 0; i < rows; ++i) {
            maxColValue = max(maxColValue, table[i][j]);
        }

        minColsMaxValue = min(minColsMaxValue, maxColValue);
    }

    return minColsMaxValue;
}


void displayTable(double** table, int rows, int cols) {
    cout << "Таблица:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
}


int main() {
    setlocale(LC_ALL, "ru_RU.utf-8");

    int rows, cols, choice;

    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    double** table = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        table[i] = new double[cols];
    }

    do {
        cout << "------------------------------------------------------------------" << endl;
        cout << "Меню:" << endl;
        cout << "1. Заполнить таблицу случайно" << endl;
        cout << "2. Заполнить таблицу вручную" << endl;
        cout << "3. Показать таблицу" << endl;
        cout << "4. Найти минимальный среди максимальных элементов столбцов таблицы" << endl;
        cout << "5. Выйти" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        if (choice == 1) {
            cout << "------------------------------------------------------------------" << endl;
            generateTable(table, rows, cols);
            cout << "Таблица заполнена случайными числами." << endl;
        } else if (choice == 2) {
            cout << "------------------------------------------------------------------" << endl;
            fillTable(table, rows, cols);
            cout << "Заполнение таблицы завершено." << endl;
        } else if (choice == 3) {
            cout << "------------------------------------------------------------------" << endl;
            displayTable(table, rows, cols);
        } else if (choice == 4) {
            cout << "------------------------------------------------------------------" << endl;
            double minMax = findMinOfMaxColumns(table, rows, cols);
            cout << "Минимальный среди максимальных элементов столбцов: " << minMax << endl;
        } else if (choice == 5) {
            cout << "------------------------------------------------------------------" << endl;
            cout << "Выход" << endl;
        } else {
            cout << "------------------------------------------------------------------" << endl;
            cout << "Некорректный выбор. Попробуйте снова." << endl;
        }
        
    } while (choice != 5);

    for (int i = 0; i < rows; ++i) {
        delete[] table[i];
    }

    delete[] table;

    return 0;
}
