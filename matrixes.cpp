#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void printMatrix(int n, int m, int **a) {
    ofstream out("output.txt");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            out << a[i][j] << " ";
        out << endl;
    }
    out << endl;
    out.close();
}

void matrix_one() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k;
    in >> n >> m >> k;
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    int count;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == k) {
                count++;
            }
        }
        if (count >= 3) {
            out << i << endl;
        }
    }
    out.close();
    in.close();
}

void matrix_two() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    int **matrix1 = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix1[i][j];
        }
    }
    printMatrix(n, m, matrix1);
    int **matrix2 = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix2[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix2[i][j];
        }
    }
    printMatrix(n, m, matrix2);
    int **matrix3 = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix3[i] = new int[m];
        for (int j = 0; j < m; j++) {
            matrix3[i][j] = (matrix1[i][j] > matrix2[i][j] ? matrix1[i][j] : matrix2[i][j]);
        }
    }
    printMatrix(n, m, matrix3);
    out.close();
    in.close();
}

void matrix_three() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int sum, n, m;
    in >> n >> m;

    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        sum = 0;
        matrix[i] = new int[m + 1];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
            sum += matrix[i][j];
        }
        matrix[i][m] = sum;
    }
    printMatrix(n, m + 1, matrix);
    out.close();
    in.close();
}

void matrix_four() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, tmp;
    in >> n >> m;

    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        tmp = matrix[i][i];
        matrix[i][i] = matrix[i][j];
        matrix[i][j] = tmp;
    }
    printMatrix(n, m, matrix);
    out.close();
    in.close();
}

void matrix_five() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, maxi = INT_MIN;
    in >> n >> m;
    int mini;
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        mini = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (mini > matrix[j][i]) {
                mini = matrix[j][i];
            }
        }
        if (maxi < mini) {
            maxi = mini;
        }
    }
    out << maxi;
    out.close();
    in.close();
}

bool check(int x) {
    return 10 <= x && x <= 99;
}

void matrix_six() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, count = 0;
    in >> n >> m;

    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (check(matrix[i][j])) count++;
        }
    }
    out << count;
    out.close();
    in.close();
}

void matrix_seven() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;

    int **matrix = new int *[n + 1];

    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m + 1];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    int sum, new_sum = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            sum += matrix[i][j];
        }
        matrix[i][m] = sum;
        new_sum += sum;
    }
    // fucking shit need to fix!!!!!!!!!!!!
    for (int column = 0; column < m; column++) {
        sum = 0;
        for (int row = 0; row < n; row++) {
            sum += matrix[row][column];
            a
        }

        matrix[n][column] = sum;
        new_sum += sum;
    }

    matrix[n][m] = new_sum;
    printMatrix(n + 1, m + 1, matrix);
    out.close();
    in.close();
}