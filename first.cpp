#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool is_prime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int one() {
    long int n;
    cin >> n;
    unsigned int sum = 0;
    while (n > 0) {
        sum += ((n % 10) % 2 == 0) ? n % 10 : 0;
        n /= 10;
    }
    cout << "sum" << sum << endl;
    return 0;
}
int two() {
    long int n;
    cin >> n;
    unsigned int count_odd = 0, count_even = 0;
    while (n > 0) {
        count_odd += ((n % 10) % 2 == 0) ? 1 : 0;
        count_even += ((n % 10) % 2 == 0) ? 0 : 1;
        n /= 10;
    }
    cout << "count odd" << count_odd << endl;
    cout << "count even" << count_even << endl;
    return 0;
}
int three() {
    long int n;
    cin >> n;
    long long int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    cout << "factorial" << factorial << endl;
    return 0;
}
int four() {
    unsigned int n;
    int count = 0;
    do
    {
        cin >> n;
        count += is_prime(n) ? 1 : 0;
    } while (n >= 2);
    cout << "count" << count << endl;
    return 0;
}
int five() {
    long int n;
    cin >> n;
    unsigned int sum = 0;
    unsigned int proisv = 1;
    while (n > 0) {
        sum += (n % 10);
        proisv *= (n % 10);
        n /= 10;
    }
    cout << "sum" << sum << endl;
    cout << "proisv" << proisv << endl;
    return 0;
}
int six() {
    long int n;
    
    cin >> n;
    vector<int> fib(n);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            cout << fib[i] << endl;
        }
        else {
            fib[i] = fib[i - 1] + fib[i - 2];
            cout << fib[i] << endl;
        }
        
    }
    return 0;
}
int seven() {
    int n, degree;
    cin >> n >> degree;
    cout << pow(n, degree) << endl;
    return 0;
}
int eight() {
    int m, n;
    cin >> m >> n;
    for (; m <= n; m++) {
        int i = m;
        for (int j = 2; j < sqrt(i); j++){
            if (i% j == 0){
                cout << j << " " << i / j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
int nine() {
    int abcd, a, b, c, d, ab, cd;
    cin >> abcd;
    d = abcd % 10;
    abcd /= 10;
    c = abcd % 10;
    abcd /= 10;
    b = abcd % 10;
    abcd /= 10;
    a = abcd;
    ab = a * 10 + b;
    cd = c * 10 + d;
    cout << ab + cd;
    return 0;
}
int ten() { // предпологаю, что под НОД имелось ввиду наибольший общий делитель(gcd)
    int n1, n2, gcd = 1;
    cin >> n1 >> n2;
    for (int i = 1; i <= n1; i++) {
        if (n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}
int eleven() {
    int n;
    cin >> n;
    int first;
    int last = n % 10;
    while (n > 0) {
        first = n % 10;
        n /= 10;
    }
    cout << first + last << endl;
    return 0;
}
int twelve() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
bool thirteen() {
    int n;
    int cur, prev;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cin >> prev;
        }
        else if (i == 1) {
            cin >> cur;
            if (cur <= prev) {
                return false;
            }
        }
        else {
            if (cur <= prev) {
                return false;
            }
            prev = cur;
            cin >> cur;
        }
    }
    return true;
}
int quadratic_equation() {
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
                cout << 1 << endl; // бесконечное количество решений
            }
            else {
                cout << 0 << endl; // нет решений
            }
        }
        else {
            cout << -c / b << endl; // одно решение
        }
    }
    else {
        double discriminant = pow(b, 2) - 4 * a * c;
        if (discriminant == 0) {
            cout << -b / (2 * a) << endl; // одно решение
        }
        else {
            double temp = sqrt(abs(discriminant)) / (2 * a);
            if (discriminant < 0) {
                if (abs(temp) == 1) {
                    cout << -b / (2 * a) << "-i "; // 2 комплексных корня
                    cout << -b / (2 * a) << "+i" << endl;
                }
                else {
                    cout << -b / (2 * a) << -temp << "i "; // 2 комплексных корня
                    cout << -b / (2 * a) << "+" << temp << "i" << endl;
                }
            }
            else {
                cout << -b / (2 * a) - temp << " "; // 2 корня
                cout << -b / (2 * a) + temp << endl;
            }
        }
    }
    return 0;
}
int main() {
    return 0;

}