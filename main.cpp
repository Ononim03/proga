#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    double a, b, c;
    bool is_complex = false;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << "Enter c: " << endl;
    cin >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            cout << -c / b << endl;
        }
    } else {
        double discriminant = b * b - 4 * a * c;
        if (discriminant == 0) {
            cout << -b / (2 * a) << endl;
        } else {
            double temp = sqrt(abs(discriminant)) / (2 * a);
            if (discriminant < 0) {
                if (abs(temp) == 1) {
                    cout << -b / (2 * a) <<"-i ";
                    cout << -b / (2 * a) << "+i" << endl;
                } else {
                    cout << -b / (2 * a) << -temp << "i ";
                    cout << -b / (2 * a) << "+" << temp << "i" << endl;
                }
            } else {
                cout << -b / (2 * a) - temp << " ";
                cout << -b / (2 * a) + temp << endl;
            }
        }
    }
    return 0;
}
