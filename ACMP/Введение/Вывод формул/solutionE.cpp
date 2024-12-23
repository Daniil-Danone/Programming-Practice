#include <iostream>

using namespace std;

int main() {
    int lessons, start, end, duration;

    cin >> lessons;

    start = 9 * 60;
    duration = lessons * 45 + (lessons / 2) * 5 + ((lessons + 1) / 2 - 1) * 15;
    end = start + duration;

    cout << end / 60 << " " << end % 60;

    return 0;
}