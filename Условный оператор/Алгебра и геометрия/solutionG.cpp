#include <iostream>

using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == 0 && b == 0 && c == 0) {
        cout << 0;
        return 0;
        
    }
    
    if (a != 0) {
        cout << a;
    }
    
    if (a != 0) {
        if (b == -1) {
            cout << "-x";
        } else if (b == 1) {
            cout << "+x";
        } else if (b > 0) {
            cout << "+" << b << "x";
        } else if (b < 0) {
            cout << b << "x";
        }
    } else {
        if (b == -1) {
            cout << "-x";
        } else if (b == 1) {
            cout << "x";
        } else if (b > 0) {
            cout << b << "x";
        } else if (b < 0) {
            cout << b << "x";
        }
    }
    
    if (a != 0 || b != 0) {
        if (c == -1) {
            cout << "-y";
        } else if (c == 1) {
            cout << "+y";
        } else if (c > 0) {
            cout << "+" << c << "y";
        } else if (c < 0) {
            cout << c << "y";
        }
    } else {
        if (c == -1) {
            cout << "-y";
        } else if (c == 1) {
            cout << "y";
        } else if (c > 0) {
            cout << c << "y";
        } else if (c < 0) {
            cout << c << "y";
        }
    }

   return 0;
}