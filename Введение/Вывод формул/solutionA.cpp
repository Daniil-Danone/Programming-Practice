#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long x, y, z;
    int pen, pencil, flom;

    pen = 3;
    pencil = pen + 2;
    flom = pencil + 7;

    cin >> x >> y >> z;

    cout << fixed << setprecision(0) << x * pen + y * pencil + z * flom;

    return 0;
}