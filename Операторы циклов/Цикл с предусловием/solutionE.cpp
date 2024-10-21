#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a0 = 0, a1 = 1;

    if (n == 0) {
        cout << a0;
        return 0;
    }

    if (n == 1) {
        cout << a1;
        return 0;
    }

    int current = 1;
    int previous = 0;
    int i = 2;

    while (i <= n) {
        int next = current + previous;
        previous = current;
        current = next;
        i += 1;
    }

    cout << current;

    return 0;
}
