#include <iostream>

using namespace std;

int main() {
    int n;
    int count = -1;
    int summary = 0;
    do {
        cin >> n;
        count += 1;
        summary += n;
    } while (n != 0);

    if (count != 0) {
        cout << double(summary) / count;
    } else {
        cout << 0;
    }
}