#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int n, m;

        cin >> n >> m;

        cout << 19 * m + (n + 239) * (n + 366) / 2 << endl;
    }

    return 0;
}