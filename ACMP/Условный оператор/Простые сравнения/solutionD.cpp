#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a >= b && b >= c) {
        cout << a - c;
    } 
    else if (a >= c && c >= b) {
        cout << a - b;
    } 
    else if (b >= a && a >= c) {
        cout << b - c;
    }
    else if (b >= c && c >= a) {
        cout << b - a;
    }
    else if (c >= b && b >= a) {
        cout << c - a;
    } 
    else if (c >= a && a >= b) {
        cout << c - b;
    }

    return 0;
}