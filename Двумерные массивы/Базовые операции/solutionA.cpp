#include <iostream>


using namespace std;

int main() {
    int n, m, a[100][100];

    cin >> n >> m;

    int rows[100];
    int cols[100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int row = 0;
        for (int j = 0; j < m; j++){
            row += a[i][j];
        }
        cout << row << " ";
    }

    cout << endl;

    for (int i = 0; i < m; i++) {
        int col = 0;
        for (int j = 0; j < n; j++){
            col += a[j][i];
        }
        cout << col << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}