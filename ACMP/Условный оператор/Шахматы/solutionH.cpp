#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    string cell1, cell2;

    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 % 2 == 1) {
        if (y1 % 2 == 0) {
            cell1 = "WHITE";
        } else {
            cell1 = "BLACK";
        }
    } else {
        if (y1 % 2 == 0) {
            cell1 = "BLACK";
        } else {
            cell1 = "WHITE";
        }
    }

    if (x2 % 2 == 1) {
        if (y2 % 2 == 0) {
            cell2 = "WHITE";
        } else {
            cell2 = "BLACK";
        }
    } else {
        if (y2 % 2 == 0) {
            cell2 = "BLACK";
        } else {
            cell2 = "WHITE";
        }
    }

    if (cell1 == cell2) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}