#include <iostream>

using namespace std;


struct Point {
    int x;
    int y;
};


int Side (Point a, Point b) {

    int x = abs(a.x - b.x);
    int y = abs(a.y - b.y);

    return x * x + y * y;
}

int main () {
    int x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    Point a{x1, y1};
    Point b{x2, y2};
    Point c{x3, y3};

    int sideA = Side(a, b);
    int sideB = Side(b, c);
    int sideC = Side(c, a);

    if (sideA + sideB == sideC) {
        cout << "Yes";
    } else if (sideA + sideC == sideB) {
        cout << "Yes";
    } else if (sideB + sideC == sideA) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}