#include <iostream>

using namespace std;

int main() {
    int f1, f2, f3;

    cin >> f1 >> f2 >> f3;

    if (f1 < 94 || f2 < 94 || f3 < 94 || f1 > 727 || f2 > 727 || f3 > 727) {
        cout << "Error";
        return 0;
    }

    if (f1 > f2 && f1 > f3) {
        cout << f1;
    } 
    else if (f2 > f3 && f2 > f1) {
        cout << f2;
    } 
    else if (f3 > f1 && f3 > f2) {
        cout << f3;
    }
    else {
        cout << f1;
    }

    return 0;
}