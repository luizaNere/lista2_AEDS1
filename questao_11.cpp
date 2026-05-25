#include <iostream>
#include <iomanip>
using namespace std;

const int QUATRO = 4;

void preencherMatrizes(int a[QUATRO][QUATRO], int b[QUATRO][QUATRO]) {
    int numero;
    cout << endl << "MATRIZ A" << endl;
    for(int i = 0; i < QUATRO; i++) {
        for(int j = 0; j < QUATRO; j++) {
            cout << endl << "Número [" << i+1 << "][" << j+1 << "]: ";
            cin >> numero;
            a[i][j] = numero;
        }
    }
    cout << endl << "MATRIZ B" << endl;
    for(int i = 0; i < QUATRO; i++) {
        for(int j = 0; j < QUATRO; j++) {
            cout << endl << "Número [" << i+1 << "][" << j+1 << "]: ";
            cin >> numero;
            b[i][j] = numero;
        }
    }
}

void somarMatrizes(int a[QUATRO][QUATRO], int b[QUATRO][QUATRO], int c[QUATRO][QUATRO]) {
    for(int i = 0; i < QUATRO; i++) {
        for(int j = 0; j < QUATRO; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int a[QUATRO][QUATRO];
    int b[QUATRO][QUATRO];
    int c[QUATRO][QUATRO];

    preencherMatrizes(a, b);
    somarMatrizes(a, b, c);

    cout << endl << "MATRIZ C = A + B" << endl;

    for(int i = 0; i < QUATRO; i++) {
        cout << "| ";
        for(int j = 0; j < QUATRO; j++) {
            cout << setw(5) << c[i][j] << " |";
        }
        cout << endl;
    }
}