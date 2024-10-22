#include <iostream>

using namespace std;

int main() {
    int n, a[1000], min = 1001, max = -1001;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;

        a[i] = num;

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }

    for (int j = 0; j < n; j++) {
        if (a[j] == max) {
            cout << min << " ";
        } else {
            cout << a[j] << " ";
        }
    }

    return 0;
}