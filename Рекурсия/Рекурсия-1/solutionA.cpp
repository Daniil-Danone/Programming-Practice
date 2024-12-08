#include <iostream>

using namespace std;

void printReverse(int array[1000], int index) {
    if (index < 0) {
        return;
    }
    cout << array[index] << " ";

    printReverse(array, index - 1);
}

int main() {

    int n, array[1000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    printReverse(array, n - 1);

    return 0;
}
