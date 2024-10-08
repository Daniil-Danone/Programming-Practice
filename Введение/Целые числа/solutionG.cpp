#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    cout << k / n << " " << k % n << " " << n - (k % n);
    
    return 0;
}