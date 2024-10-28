#include <iostream>

using namespace std;

int IsLetter (const char C) {
    if ((int(C) >= 65 && int(C) <= 90) || (int(C) >= 97 && int(C) <= 122)) {
        return 1;
    }

    return 0;
}

int main () {
    int counter = 0;

    for (int i = 0; i < 3; i++) {
        char C;

        cin >> C;
        counter += IsLetter(C);
    }

    cout << counter;
    return 0;
}