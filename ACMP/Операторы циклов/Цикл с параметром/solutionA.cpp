#include <iostream>

using namespace std;

int main() {
    int n;
    int coins = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int coin;

        cin >> coin;

        coins += coin;
    }

    if (coins >= n / 2 + n % 2) {
        cout << n - coins;
    } else {
        cout << coins;
    }

    return 0;
}