#include <iostream>
#include <cmath>
using namespace std;
// файл 1
// 1
void init_point(int& x1, int& y1, int& x2, int& y2) {
    cin >> x1 >> y1 >> x2 >> y2;
}
double calc_distance(int& x1, int& y1, int& x2, int& y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
// 2
void init_triangle(int& a, int& b, int& c) {
    cin >> a >> b >> c;
}
bool is_exist(int& a, int& b, int& c) {
    return (a + b > c) && (b + c > a) && (a + c > b);
}
int calc_perimeter(int& a, int& b, int& c) {
    return a + b + c;
}
double calc_area(int& a, int& b, int& c) {
    double p = double(calc_perimeter(a, b, c)) / 2;
   
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
// файл 2
void Create_mas(int *arr, int &n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
bool is_prime(int& a) {
    if (a <= 1) {
        return false;
    }
    if (a == 2) {
        return true;
    }
    if (a % 2 == 0) {
        return false;
    }
    for (int i = 3; i < sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}
bool E_prime(int *arr, int &n) {
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            return true;
        }
    }
    return false;
}
bool Even_number(int& a) {
    return a % 2 == 0;
}
bool A_even(int* arr, int& n) {
    for (int i = 0; i < n; i++) {
        if (!Even_number(arr[i])) {
            return false;
        }
    }
    return true;
}
int Even_sum(int* arr, int& n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (Even_number(arr[i])) {
            s += arr[i];
        }
    }
    return s;
}
void Shift(int* arr, int& n) {
    int temp = arr[n - 1];
    for (int i = n - 2; i > 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}

void Mult_num(int* arr, int& n) {
    int num;
    cin >> num;
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * num;
    }
}
void Show_mas(int* arr, int& n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    /* int x1, y1, x2, y2;
     init_point(x1, y1, x2, y2);
     cout << calc_distance(x1, y1, x2, y2);*/

    /*int a, b, c;
    init_triangle(a, b, c);
    if (is_exist(a, b, c)) {
        cout << calc_perimeter(a, b, c) << endl;
        cout << calc_area(a, b, c);
    }
    else {
        cout << "Enter correct sides";
    }*/
    int n;
    cout << "Enter array lenght ";
    cin >> n;
    int* arr = new int[n];
    Create_mas(arr, n);
    Shift1(arr, n);
    Show_mas(arr, n);
    return 0;
}