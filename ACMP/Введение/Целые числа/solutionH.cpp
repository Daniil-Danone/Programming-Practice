#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long v, t, result, remain;

    cin >> v >> t;

    result = 1 + v * t;
    remain = result % 109 + 109 * (result <= 0);

    if ((result <= 0) + (result > 109)) {
        cout << remain;
    } else {
        cout << result;
    }
    
    return 0;
}