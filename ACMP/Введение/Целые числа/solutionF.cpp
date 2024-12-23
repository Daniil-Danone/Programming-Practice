#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << 1 + ((a % b) * (b % a) * 666);

    return 0;
}