#include <iostream>

using namespace std;

int main() {
    int n;
    int count = -1;
    do {
        cin >> n;
        count += 1;
    } while (n != 0);

    cout << count;
}