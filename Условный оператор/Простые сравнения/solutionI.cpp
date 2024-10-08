#include <iostream>

using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3;

    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    int minA, midA, maxA, minB, midB, maxB;


    if (a1 >= a2 && a2 >= a3){
        minA = a3;
        midA = a2;
        maxA = a1;
    }
    else if (a1 >= a3 && a3 >= a2) {
        minA = a2;
        midA = a3;
        maxA = a1;
    }
    else if (a2 >= a3 && a3 >= a1) {
        minA = a1;
        midA = a3;
        maxA = a2;
    }
    else if (a2 >= a1 && a1 >= a3) {
        minA = a3;
        midA = a1;
        maxA = a2;
    }
    else if (a3 >= a1 && a1 >= a2) {
        minA = a2;
        midA = a1;
        maxA = a3;
    }
    else if (a3 >= a2 && a2 >= a1) {
        minA = a1;
        midA = a2;
        maxA = a3;
    }

    if (b1 >= b2 && b2 >= b3){
        minB = b3;
        midB = b2;
        maxB = b1;
    }
    else if (b1 >= b3 && b3 >= b2) {
        minB = b2;
        midB = b3;
        maxB = b1;
    }
    else if (b2 >= b3 && b3 >= b1) {
        minB = b1;
        midB = b3;
        maxB = b2;
    }
    else if (b2 >= b1 && b1 >= b3) {
        minB = b3;
        midB = b1;
        maxB = b2;
    }
    else if (b3 >= b1 && b1 >= b2) {
        minB = b2;
        midB = b1;
        maxB = b3;
    }
    else if (b3 >= b2 && b2 >= b1) {
        minB = b1;
        midB = b2;
        maxB = b3;
    }

    cout << maxA * maxB + midA * midB + minA * minB;

    return 0;
}