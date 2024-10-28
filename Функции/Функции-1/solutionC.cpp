#include <iostream>

using namespace std;

long long Factorial (int number) {

    long long result = 1;

    while (number > 1) {
        result *= number;
        number -= 1;
    }

    return result;
}

int main () {
    int n, k;

    cin >> n >> k;

    cout << Factorial(n) / Factorial(k) / Factorial(n - k);
    return 0;
}