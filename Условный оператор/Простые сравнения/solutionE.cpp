#include <iostream>

using namespace std;

int main() {
    int a1, b1, a2, b2, a3, b3, a4, b4;

    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;

    int scoreA = a1 + a2 + a3 + a4;
    int scoreB = b1 + b2 + b3 + b4;

    if (scoreA > scoreB) {
        cout << 1;
    } else if (scoreA < scoreB) {
        cout << 2;
    } else {
        cout << "DRAW";
    }

    return 0;
}