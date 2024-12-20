#include <iostream>

using namespace std;
void printMatrix(int n, int m, int** a) {
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    
}

void matrix_first() {   
    int n, m;
    cin >> n >> m;
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int** matrix1 = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix1[i][j];
        }
    }
    int** matrix2 = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix2[i] = new int[m];
        for (int j = 0; j < m; j++) {
            matrix2[i][j] = matrix[i][j] + matrix1[i][j];
        }
    }
    printMatrix(n, m, matrix2);
}
void matrix_second() {
    int n, m, k;
    cin >> n >> m >> k;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] *= k;
        }
    }
    printMatrix(n, m, matrix);
}
void matrix_third() {
    int m, n, p;
    cin >> n >> m >> p;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int** matrix1 = new int* [m];
    for (int i = 0; i < m; i++) {
        matrix1[i] = new int[p];
        for (int j = 0; j < p; j++) {
            cin >> matrix1[i][j];
        }
    }
    int** matrix2 = new int* [n];

    for (int i = 0; i < n; i++) {
        matrix2[i] = new int[p];
        for (int j = 0; j < p; j++) {
            matrix2[i][j] = 0;
            for (int k = 0; k < m; k++) {
                matrix2[i][j] += matrix[i][k] * matrix1[k][j];
            }

        }
    }
    printMatrix(n, p, matrix2);
}
void matrix_fourth() {
    int n, m;
    cin >> n >> m;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int** matrix1 = new int* [m];
    for (int i = 0; i < m; i++) {
        matrix1[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix1[i][j] = matrix[j][i];
        }
    }
    printMatrix(m, n, matrix1);
}
void matrix_fifth() {
    int n;
    cin >> n;
    int m = n;
    int i1 = 0; int j1 = n - 1;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[n - 1 - j][n - 1 - i];
            matrix[n - 1 - j][n - 1 - i] = tmp;
            if (i == i1 && j == j1) { i1++; j1--; break; }
        }
    }
    printMatrix(n, m, matrix);
}
int main() {
    matrix_fifth();
    return 0;

}