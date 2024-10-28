#include <iostream>

using namespace std;

int IsPrime (const int N) {

    if (N < 2) {
        return 0;
    }
    
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            return 0;
        }
    }

    return N;
}

int main () {
    int a, b, c;

    cin >> a >> b >> c;

    int summary = IsPrime(a) + IsPrime(b) + IsPrime(c);

    cout << summary << endl;

    if (IsPrime(summary)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}