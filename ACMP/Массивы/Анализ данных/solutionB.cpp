#include <iostream>

using namespace std;

int main() {
    int n, a[1000], m;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;

    for (int j = 0; j < m; j++) {
        int ik, jk;

        cin >> ik >> jk;

        ik -= 1;
        jk -= 1;

        for (int index = ik; index <= jk; index++) {
            cout << a[index] << " ";
        }

        cout << endl;
    }
    
    return 0;
}