#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 0;
    do {
        cin >> n;
        count += n;
    } while (n != 0);

    cout << count;
}