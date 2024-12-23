#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a != 0) {
        if (b != 0 && c != 0) {
            double d = (b * b) - (4 * a * c);

            if (d > 0) {
                cout << 2 << endl;
                double x1 = (-b - sqrt(d)) / (2 * a);
                double x2 = (-b + sqrt(d)) / (2 * a);
        
                cout << fixed << setprecision(6) << x1 << endl;
                cout << fixed << setprecision(6) << x2 << endl;
            } else if (d == 0) {
                cout << 1 << endl;
                double x = -b / (2 * a);
                cout << fixed << setprecision(6) << x << endl;
            } else {
                cout << 0 << endl;
            }
            
        } else if (b != 0 && c == 0) {
            cout << 2 << endl;

            double x1 = -b / a;
            double x2 = 0;
    
            cout << fixed << setprecision(6) << x1 << endl;
            cout << fixed << setprecision(6) << x2 << endl;
        } else if (b == 0 && c != 0) {
            double frac = -c / a;

            if (frac > 0) {
                cout << 2 << endl;
                double x1 = -sqrt(frac);
                double x2 = sqrt(frac);

                cout << fixed << setprecision(6) << x1 << endl;
                cout << fixed << setprecision(6) << x2 << endl;
            } else if (frac == 0) {
                cout << 1 << endl;
                cout << fixed << setprecision(6) << 0 << endl;
            } else {
                cout << 0 << endl;
            }
        
        } else if (b == 0 && c == 0) {
            cout << 1 << endl;
            cout << fixed << setprecision(6) << 0 << endl;
        }
    } else {
        if (b != 0 && c != 0) {
            cout << 1 << endl;
            double x1 = -c / b;
            cout << fixed << setprecision(6) << x1 << endl;
        } else if (b != 0 && c == 0) {
            cout << 1 << endl;
            cout << fixed << setprecision(6) << 0 << endl;
        } else if (b == 0 && c != 0) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}