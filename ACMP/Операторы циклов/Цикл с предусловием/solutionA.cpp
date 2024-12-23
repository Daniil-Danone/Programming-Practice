#include <iostream>

using namespace std;

int main() {
    int n;
    int num = 1;

    cin >> n;

    while (num * num <= n) {
        cout << num * num << " ";
        num += 1;
    }

    return 0;
}