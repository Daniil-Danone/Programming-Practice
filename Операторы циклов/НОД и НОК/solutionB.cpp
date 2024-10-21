#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int a1 = a, b1 = b;
    
    while(b %= a) {
        swap(a, b);
    }

    cout << (a1 * b1) / a;

    return 0;
}