#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 4; // Initialize variables

    cout << "Initial values: a = " << a << ", b = " << b << endl;
    a += b; // a = a + b → a = 6
    cout << "After a += b, a = " << a << endl;
    b -= a; // b = b - a → b = 4 - 6 = -2
    cout << "After b -= a, b = " << b << endl;
    a *= b; // a = a * b → a = 6 * -2 = -12
    cout << "After a *= b, a = " << a << endl;
    if (a != 0) { // Prevent division by zero
        b /= a; // b = b / a → b = -2 / -12 = 0 (integer division)
        cout << "After b /= a, b = " << b << endl;
    }
    if (b != 0) { // Prevent modulo by zero
        a %= b; // a = a % b (undefined if b = 0)
        cout << "After a %= b, a = " << a << endl;
    } else {
        cout << "Skipping a %= b to prevent division by zero." << endl;
    }
    return 0;
}
