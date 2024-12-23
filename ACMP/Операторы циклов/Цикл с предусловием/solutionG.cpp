#include <iostream>

using namespace std;

int main() {
    int x, p, y;
    int year = 0;

    cin >> x >> p >> y;

    x *= 100;
    y *= 100;

    while (x < y) {
        x *= (1 + (p / 100.));
        year += 1;
    }

    cout << year;

    return 0;
}