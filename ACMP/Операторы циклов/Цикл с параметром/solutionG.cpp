#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int roads = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int road;

            cin >> road;

            if (j > i && road == 1) {
                roads += 1;
            }
        }
    }

    cout << roads;

    return 0;
}