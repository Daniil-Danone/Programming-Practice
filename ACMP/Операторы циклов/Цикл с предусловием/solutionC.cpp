#include <iostream>

using namespace std;

int main() {
    int n;
    int power = 1;
    int result = 1;

    cin >> n;

    while (result <= n) {
        cout << result << " ";
        power += 1;
        result *= 2;
    }

    return 0;
}