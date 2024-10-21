#include <iostream>

using namespace std;

int main() {
    int a[1000], n, x, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> x;

    for (int j = 0; j < n; j++) {
        if (a[j] == x) {
            count += 1;
        }
    }

    cout << count;
    return 0;
}