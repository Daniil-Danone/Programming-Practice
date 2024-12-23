#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

const double PI = 3.1415926535;
const double E = 2.7182818284;
const double h = 0.025;
const double xStart = -3.0;
const double xEnd = 1.5;
const int functionsPerRow = 4;
const int elementsPerRow = functionsPerRow * 2;
const int rowsPerPage = 11;
const int argumentWidth = 10;
const int functionWidth = 12;
const int tableLineWidth = (argumentWidth + functionWidth) * functionsPerRow + (elementsPerRow + 1);


double function(double x, double p) {
    if (pow(x, 5) > pow(E, abs(p * x))) {
        return (1 - pow(atan(p * x), 4)) / (sqrt(x));
    }
    return log(PI + abs(p * x));
}

string formatNumber(double value, int precision, bool scientificFlag = false) {
    stringstream ss;

    if (scientificFlag) {
        ss << scientific << setprecision(precision) << value;
    } else {
        ss << fixed << setprecision(precision) << value;
    }
    return ss.str();
}


void printHead() {
    cout << "!";

    for (int i = 0; i < elementsPerRow; i++) {
        int titleWidth = functionWidth - 8;
        if (i % 2 == 0) {
            int titleWidth = argumentWidth - 8;
            cout << string(titleWidth / 2, ' ') << "Аргумент" << string(titleWidth / 2, ' ') <<  "!";
        } else {
            int titleWidth = functionWidth - 7;
            cout << string(titleWidth / 2, ' ') << "Функция" << string(titleWidth / 2 + 1, ' ') <<  "!";
        }
    }

    cout << endl;
}

void printRow(double rowX[], double p) {
    cout << "!";

    for (int i = 0; i < functionsPerRow; i++) {
        double x = rowX[i];

        if (x <= xEnd + 1e-6) {
            string stringX = formatNumber(x, 4);
        
            int argumentLength = stringX.length();
            int argumentPadding = (argumentWidth - argumentLength) / 2;

            cout << string(argumentPadding, ' ') << stringX << string(argumentWidth - argumentLength - argumentPadding, ' ') << "!";


            string stringFunction = formatNumber(function(x, p), 4, true);
            
            int functionLength = stringFunction.length();
            int functionPadding = (functionWidth - functionLength) / 2;

            cout << string(functionPadding, ' ') << stringFunction << string(functionWidth - functionLength - functionPadding, ' ') << "!";
        } else {
            cout << string(argumentWidth, ' ') << "!";
            cout << string(functionWidth, ' ') << "!";
        }
    }
    cout << endl;
}


void printLine() {
    for (int i = 0; i < tableLineWidth; i++) {
        cout << "-";
    }
    cout << endl;
}

void printPage(double p, double startX, int page) {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    printLine();
    cout << "Таблица значений функции" << endl;
    cout << "При параметре p = " << p << endl;
    cout << "Страница " << page + 1 << endl;

    printLine();
    printHead();

    for (int i = 0; i < rowsPerPage; ++i) {
        double rowStartX = startX + i * h * functionsPerRow;

        double rowX[elementsPerRow];

        for (int j = 0; j < functionsPerRow; j++) {
            double x = rowStartX + h * j;
            rowX[j] = x;
        }

        printRow(rowX, p);
    }
    printLine();
}


int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double p;
    int totalItems = (xEnd - xStart) / h;
    int totalPages = (totalItems + (rowsPerPage * functionsPerRow) - 1) / (rowsPerPage * functionsPerRow);

    do {
        cout << "Введите значение p на отрезке [-3, 3]: ";
        cin >> p;
    } while (abs(p) > 3);

    cin.ignore();

    cout << "Всего элементов: " << totalItems << endl;
    cout << "Всего страниц: " << totalPages << endl;

    double currentX = xStart;
    int page = 0;

    do {
        printPage(p, currentX, page);
        currentX += rowsPerPage * h * functionsPerRow;
        page++;

        cout << "Нажмите Enter для продолжения...";
        cin.get();

    } while (page < totalPages);

    return 0;
}
