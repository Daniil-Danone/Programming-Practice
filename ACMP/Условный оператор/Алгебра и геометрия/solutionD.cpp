#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
    int x1, y1, r1, x2, y2, r2;
    double length;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    length = sqrt(abs(x2-x1)*abs(x2-x1) + abs(y2-y1)*abs(y2-y1));

    if (length > r1 + r2) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
}