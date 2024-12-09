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
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 0) {
            f = !f;
        }
        if (f) {
            if (a[i] == 0) {
                break;
            }
            s += a[i];
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
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        x = a[i];
        if (!f && x == 0) {
            f = true;
            continue;
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
    int* a = new int[n];
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
        else {
            f = false;
            break;
        }
        prev_x = cur_x;
    }
    cout << (f ? "yes" : "no");
    return 0;
}

int four() {
    int n, x, index = 0;
    cin >> n;
    int* a = new int[n];
    bool f;
    int* repeats = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        f = false;
        x = a[i];
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
    }
    cout << index << ",";
    for (int i = 0; i < index; i++) {
        cout << repeats[i] << " ";
    }
    return 0;
}


int five() {
    int n;
    cin >> n;
    int x;
    int begin = 0, end = 0;
    int cur_begin = 0, cur_end = 0;
    int max_len = 0, cur_len = 0;
    bool f = false;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        x = arr[i];
        if (x > 0) {
            if (!f){
                cur_begin = i;
                f = true;
            }
            cur_end++;
            cur_len++;
        }
        else {
            if (max_len < cur_len) {
                begin = cur_begin;
                end = cur_end;

                max_len = cur_len;
            }
            cur_begin = i;
            f = false;
            cur_end = i + 1;
            cur_len = 0;
        }
    }
    for (int i = begin; i < end; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

int main() {


    five();
    return 0;
}
