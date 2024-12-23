#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int maxV = 0;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int v, s;

        cin >> v >> s;

        if (s == 1 && v > maxV) {
            maxV = v;
            index = i + 1;
        }
    }

    cout << index;

    return 0;
}