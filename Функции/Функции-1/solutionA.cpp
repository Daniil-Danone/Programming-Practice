#include <iostream>

using namespace std;

int IsDigit (const string C) {
    string numbers[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    for (int j = 0; j < 10; j++) {
        if (C == numbers[j]) {
            return 1;
        }
    }

    return 0;
}

int main () {
    int counter = 0;

    for (int i = 0; i < 3; i++) {
        string C;

        cin >> C;
        counter += IsDigit(C);
    }

    cout << counter;
    return 0;
}