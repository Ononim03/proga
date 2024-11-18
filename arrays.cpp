#include <iostream>
#include <set>
#include <vector>

using namespace std;

int first() {
    int n;
    int x;
    cin >> n;
    int s = 0;
    bool f = false;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int reversed_a[n];
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        reversed_a[j] = a[i];
        j++;
    }
    for (int i = 0; i < n; i++) {
        if (reversed_a[i] == 0) {
            f = !f;
        }
        if (f) {
            if (reversed_a[i] == 0 && s != 0) {
                break;
            }
            s += reversed_a[i];
        }

    }
    cout << s;
    return 0;
}

int second() {
    int n;
    int x;
    cin >> n;
    int s = 0;
    int end_sum = 0;
    bool f = false;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (!f && x == 0) {
            f = true;
        }
        if (f) {
            s += x;
        }
        if (x == 0 && f) {
            end_sum = s;
        }
    }
    cout << end_sum;
    return 0;
}

int is_pillar() {
    int n;
    int prev_x, cur_x, next_x;
    cin >> n;

    bool f = false;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    prev_x = a[0];
    for (int i = 1; i < n - 1; i++) {
        cur_x = a[i];
        next_x = a[i + 1];
        if ((cur_x > prev_x && cur_x > next_x) || (cur_x < prev_x && cur_x < next_x)) {
            f = true;
        }
        prev_x = cur_x;
    }
    cout << (f ? "yes" : "no");
    return 0;
}

int four() {
    int n, x, index = 0;
    cin >> n;
    int a[n];
    bool f;
    int repeats[n];
    for (int i = 0; i < n; i++) {
        f = false;
        cin >> x;
        for (int j = 0; j < i; j++) {
            for (int q = 0; q < index; q++) {
                if (repeats[q] == x) {
                    f = true;
                    break;
                }
            }
            if (f) {
                break;
            }
            if (a[j] == x) {
                repeats[index] = x;
                index++;
                break;
            }
        }
        a[i] = x;
    }
    cout << index << ",";
    for (int i = 0; i < index; i++) {
        cout << repeats[i] << " ";
    }
    return 0;
}

void copy_array(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] = arr2[i];
    }
}

int five() {
    int n;
    cin >> n;
    int x;
    int max_len = 0, cur_len = 0;
    int max_arr[n], cur_arr[n], arr[n];
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 0) {
            cur_arr[cur_len] = x;
            cur_len++;
        } else {
            if (max_len < cur_len) {
                copy_array(max_arr, cur_arr, n);
                max_len = cur_len;
            }
            cur_len = 0;
        }
    }
    for (int i = 0; i < max_len; i++){
        cout << max_arr[i] << " ";
    }

    return 0;
}

int main() {
    five();
    return 0;
}
