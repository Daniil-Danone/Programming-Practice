#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 != x2 || y1 == 1) {
        cout << "NO";
    } else if (y1 == 2 && y2 - y1 == 2) {
        cout << "YES";
    } else if (y2 - y1 == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}