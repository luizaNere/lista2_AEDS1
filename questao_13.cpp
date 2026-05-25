#include <iostream>
#include <iomanip>
using namespace std;

void preencher(int matriz[2][2]) {
    int valor;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << endl << "[" << i+1 << "][" << j+1 << "] = ";
            cin >> valor;
            matriz[i][j] = valor;
        }
    }
}

void produto(int a[2][2], int b[2][2], int produto[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            produto[i][j] = a[i][j] * b[i][j];
        }
    }
}

int main() {
    int A[2][2], B[2][2], P[2][2];
    cout << endl << "Matriz A:" << endl;
    preencher(A);
    cout << endl << "Matriz B:" << endl;
    preencher(B);

    produto(A, B, P);

    cout << endl << "Matriz C: A * B" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << setw(3) << P[i][j];
        }
        cout << endl;
    }
}