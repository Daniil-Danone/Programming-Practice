#include <iostream>

using namespace std;

int IsDigit (char C) {
    if (int(C) >= 47 && int(C) <= 58) {
        return 1;
    }

    return 0;
}

int main () {
    int counter = 0;

    for (int i = 0; i < 3; i++) {
        char C;

        cin >> C;
        counter += IsDigit(C);
    }

    cout << counter;
    return 0;
}