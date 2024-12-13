#include <iostream>
#include <fstream>
using namespace std;
void printMatrix(int n, int m, int** a)
{
    ofstream out("output.txt");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            out << a[i][j] << " ";
        out << std::endl;
    }
    out << std::endl;
    out.close();
}
void first() {
    ifstream in("input.txt");

    int n, m, col1, col2, tmp; // отсчёт столбцов идет начиная с 0
    in >> n >> m >> col1 >> col2;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        tmp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = tmp;
    }
    printMatrix(n, m, matrix);
    in.close();

}
void second() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, m, mx = -10000000000000000;

    in >> n >> m;
    int* sums = new int[m];
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    for (int column = 0; column < m; column++) {
        sums[column] = 0;
        for (int row = 0; row < n; row++) {
            sums[column] += matrix[row][column];
        }
        if (mx < sums[column]) {
            mx = sums[column];
        }
    }
    out << mx;
    out.close();
    in.close();
}
void third() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, m, mn = 10000000000000000;

    in >> n >> m;
    int* sums = new int[n];
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }

    for (int row = 0; row < n; row++) {
        sums[row] = 0;
        for (int column = 0; column < m; column++) {
            sums[row] += matrix[row][column];
        }
        if (mn > sums[row]) {
            mn = sums[row];
        }
    }
    out << mn;
    out.close();
    in.close();
}
void fourth() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;

    in >> n;
    int* positive = new int[n];
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            in >> matrix[i][j];
        }
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] > 0) {
            positive[index] = matrix[i][i];
            index++;
            out << matrix[i][i] << " ";
        }
    }
    out.close();
    in.close();
}
void fivth() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, x, mn = 100000000000;
    in >> n >> m;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {

            in >> x;
            matrix[i][j] = x;
            if (mn > x) {
                mn = x;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {


            if (matrix[i][j] == mn) out << i << " " << j << endl;

        }
    }
    out.close();
    in.close();
}
void sixth() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;

    in >> n >> m;
    int* array = new int[n * m];
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[index] = matrix[i][j];
            index++;
        }
    }
    for (int i = 0; i < m * n; i++) {
        out << array[i] << " ";
    }
    out.close();
    in.close();
}
void seventh() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n, m;

    in >> n >> m;
    int* maxi = new int[m];
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            in >> matrix[i][j];
        }
    }
    for (int column = 0; column < m; column++) {
        maxi[column] = 0;
        for (int row = 0; row < n; row++) {
            if (maxi[column] < matrix[row][column]) {
                maxi[column] = matrix[row][column];
            }
        }
        out << maxi[column] << " ";
    }
    out.close();
    in.close();
}
int main() {
    seventh();



}