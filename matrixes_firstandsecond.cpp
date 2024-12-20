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
void matrix_one() {
    
    int n, m, k;
    cin >> n >> m >> k;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
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
            cout << i << endl;
        }
    }
    
}
void matrix_two() {
    
    int n, m;
    cin >> n >> m;
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
            cin >> matrix2[i][j];
        }
    }
    int** matrix3 = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix3[i] = new int[m];
        for (int j = 0; j < m; j++) {
            matrix3[i][j] = (matrix1[i][j] > matrix2[i][j] ? matrix1[i][j] : matrix2[i][j]);
        }
    }
    printMatrix(n, m, matrix3);
}
void matrix_three() {
    
    int sum, n, m;
    cin >> n >> m;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        sum = 0;
        matrix[i] = new int[m + 1];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
        matrix[i][m] = sum;
    }
    printMatrix(n, m + 1, matrix);
    
}
void matrix_four() {
   
    int n, m, tmp;
    cin >> n >> m;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        tmp = matrix[i][i];
        matrix[i][i] = matrix[i][j];
        matrix[i][j] = tmp;
    }
    printMatrix(n, m, matrix);
    
}
void matrix_five() {
    
    int n, m, maxi = INT_MIN;
    cin >> n >> m;
    int mini;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        mini = matrix[0][i];
        for (int j = 1; j < n; j++) {
            if (mini > matrix[j][i]) {
                mini = matrix[j][i];
            }
        }
        if (maxi < mini) {
            maxi = mini;
        }
    }
    cout << maxi;
    
}
bool check(int x) {
    return 10 <= x && x <= 99;
}
void matrix_six() {
    
    int n, m, count = 0;
    cin >> n >> m;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (check(matrix[i][j])) count++;
        }
    }
    cout << count;
    
}
void matrix_seven() {
    
    int n, m;
    cin >> n >> m;

    int** matrix = new int* [n + 1];

    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m + 1];
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    matrix[n] = new int[m + 1];
    int sum;
    for (int row = 0; row < n; row++) {
        sum = 0;
        for (int column = 0; column < m; column++) {
            sum += matrix[row][column];
        }
        matrix[row][m] = sum;
    }
    for (int column = 0; column < m; column++) {
        sum = 0;
        for (int row = 0; row < n; row++) {
            sum += matrix[row][column];
        }
        
        matrix[n][column] = sum;
    }
    matrix[n][m] = 0;
    printMatrix(n + 1, m + 1, matrix);
    
}
int main() {
    matrix_six();
    return 0;

}