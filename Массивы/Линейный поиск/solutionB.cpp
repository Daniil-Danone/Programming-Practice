#include <iostream>

using namespace std;

int main() {
    int a[1000], n, l, r, max = 0, index = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> l >> r;
    
    l -= 1;
    r -= 1;

    for (l; l <= r; l++) {
        if (a[l] > max) {
            max = a[l];
            index = l + 1;
        }
    }

    cout << max << " " << index;
    return 0;
}