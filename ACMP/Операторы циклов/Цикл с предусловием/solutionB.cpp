#include <iostream>

using namespace std;

int main() {
    int n;
    int del = 2;

    cin >> n;

    while (n % del != 0) {
        del += 1;
    }

    cout << del;

    return 0;
}