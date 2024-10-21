#include <iostream>

using namespace std;

int main() {
    int n;
    int minWatermelon = 30000;
    int maxWatermelon = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int watermelon;

        cin >> watermelon;

        if (watermelon > maxWatermelon) {
            maxWatermelon = watermelon;
        }

        if (watermelon < minWatermelon) {
            minWatermelon = watermelon;
        }
    }

    cout << minWatermelon << " " << maxWatermelon << endl;

    return 0;
}