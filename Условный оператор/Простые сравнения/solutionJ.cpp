#include <iostream>

using namespace std;

int main() {
    string red, yellow, green;

    cin >> red >> yellow >> green;

    if (red == "red" && yellow == "yellow") {
        cout << "black" << endl;
        cout << "black" << endl;
        cout << "green" << endl;
    } else if (red == "black" && yellow == "black" && green == "green") {
        cout << "black" << endl;
        cout << "black" << endl;
        cout << "GREEN" << endl;
    } else if (red == "black" && yellow == "black" && green == "GREEN") {
        cout << "black" << endl;
        cout << "yellow" << endl;
        cout << "black" << endl;
    } else if (red == "black" && yellow == "yellow" && green == "black") {
        cout << "red" << endl;
        cout << "black" << endl;
        cout << "black" << endl;
    } else if (red == "red" && yellow == "black" && green == "black") {
        cout << "red" << endl;
        cout << "yellow" << endl;
        cout << "black" << endl;
    } else if (red == "black" && yellow == "YELLOW" && green == "black") {
        cout << "black" << endl;
        cout << "YELLOW" << endl;
        cout << "black" << endl;
    } else {
        cout << "error";
    }

    return 0;
}