#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int a;

    cin >> a;

    cout << a / 10 + (a % 10 != 0);

    return 0;
}