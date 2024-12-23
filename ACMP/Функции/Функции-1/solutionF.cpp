#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


struct Point {
    long double x;
    long double y;
};


long long Side (Point a, Point b) {

    long double x = abs(a.x - b.x);
    long double y = abs(a.y - b.y);

    return x * x + y * y;
}

int main () {
    long double x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    Point a{x1, y1};
    Point b{x2, y2};
    Point c{x3, y3};

    long double sideA = sqrt(Side(a, b));
    long double sideB = sqrt(Side(b, c));
    long double sideC = sqrt(Side(c, a));

    long double P = (sideA + sideB + sideC) / 2;

    long double S = sqrt(P * (P - sideA) * (P - sideB) * (P - sideC));

    cout << fixed << setprecision(1) << S;

    return 0;
}