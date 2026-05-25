#include <iostream>
#include <iomanip>

#define M 20
#define N 30
using namespace std;

void hadamard(int a[M][N], int b[M][N], int c[M][N], int lin, int col) {
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
}

void matrizTransposta(int m[M][N], int t[N][M], int lin, int col) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            t[j][i] = m[i][j];
        }
    }

    cout << endl << "MATRIZ At" << endl;
    for (int i = 0; i < col; i++) {
        cout << "| ";
        for (int j = 0; j < lin; j++) {
            cout << setw(4) <<  t[i][j] << " |";
        }
        cout << endl;
    }
}

void imprimir(int m[M][N], int lin, int col) {
    for(int i = 0; i < lin; i++) {
        cout << "| ";
        for(int j = 0; j < col; j++) {
            cout << setw(4) << m[i][j] << " |";
        }
        cout << endl;
    }
}

int main() {
    int A[M][N], B[M][N], C[M][N];
    int transposta[N][M];
    int linhas, colunas;
    int num;

    do {
        cout << "\nQuantidade de linhas: ";
        cin >> linhas;
    } while(linhas > M);
    do {
        cout << "\nQuantidade de colunas: ";
        cin >> colunas;
    } while(colunas > N);

    cout << "\nMATRIZ A\n";
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "] = ";
            cin >> num;
            A[i][j] = num;
        }
    }

    cout << "\nMATRIZ B\n";
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "] = ";
            cin >> num;
            B[i][j] = num;
        }
    }

    hadamard(A, B, C, linhas, colunas);

    cout << endl << "MATRIZ C = A * B" << endl;
    imprimir(C, linhas, colunas);
    matrizTransposta(A, transposta, linhas, colunas);
}