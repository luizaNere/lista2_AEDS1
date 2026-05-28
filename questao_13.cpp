#include <iostream>
#include <iomanip>
using namespace std;

void preencherMatriz(int mat[2][2], char nome) {
    cout << "Preencha a matriz " << nome << " (2x2):\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            cout << nome << "[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
}

void produtoCruzado(int A[2][2], int B[2][2], int C[2][2]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

void imprimirMatriz(int mat[2][2], const char* nome) {
    cout << "\nMatriz " << nome << ":\n";
    for (int i = 0; i < 2; i++) {
        cout << "| ";
        for (int j = 0; j < 2; j++)
            cout << setw(5) << mat[i][j] << " | ";
        cout << "\n";
    }
}

int main() {
    int A[2][2], B[2][2], C[2][2];

    preencherMatriz(A, 'A');
    preencherMatriz(B, 'B');
    produtoCruzado(A, B, C);

    imprimirMatriz(A, "A");
    imprimirMatriz(B, "B");
    imprimirMatriz(C, "C = A x B");
}
