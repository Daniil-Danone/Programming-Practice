#include <iostream>

using namespace std;

int main() {
    int n, a[1000], x, place = 1;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> x;

    for (int j = 0; j < n; j++) {
        if (a[j] >= x) {
            place += 1;
        }
    }

    cout << place;
    
    return 0;
}