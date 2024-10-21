#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    for (int x = -100; x <= 100; x++) {
        int answer = (a * pow(x, 3)) + (b * pow(x, 2)) + (c * x) + d;
        if (answer == 0) {
            cout << x << " ";
        }
    }

    return 0;
}