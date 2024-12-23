#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
    int x1, y1, x2, y2;
    double length;

    cin >> x1 >> y1 >> x2 >> y2;

    length = sqrt(abs(x2-x1)*abs(x2-x1) + abs(y2-y1)*abs(y2-y1));

    cout << fixed << setprecision(5) << length;

    return 0;
}