#include <iostream>

using namespace std;

int main() {
    string cell;

    cin >> cell;

    if (cell[0] == 'A' || cell[0] == 'C' || cell[0] == 'E' || cell[0] == 'G') {
        if (int(cell[1]) % 2 == 0) {
            cout << "WHITE";
        } else {
            cout << "BLACK";
        }
    } else {
        if (int(cell[1]) % 2 == 0) {
            cout << "BLACK";
        } else {
            cout << "WHITE";
        }
    }

    return 0;
}