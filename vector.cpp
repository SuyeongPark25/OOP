#include <iostream>
using namespace std;

const int MAX_DIM = 10;

void matmul(int a[][MAX_DIM], int b[][MAX_DIM], int c[][MAX_DIM], int n, int k, int m);

int main(){

    int a[10][MAX_DIM], b[10][MAX_DIM], c[10][MAX_DIM];
    int n, k, m;

    cin >> n >> k >> m;

    //A: n * k
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }

    //B: k * m
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    matmul(a, b, c, n, k, m);


    return 0;
}

void matmul(int a[][MAX_DIM], int b[][MAX_DIM], int c[][MAX_DIM], int n, int k, int m){

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            c[i][j] = 0;

            for(int r = 0; r < k; r++) {

                c[i][j] += a[i][r] * b[r][j];

            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
