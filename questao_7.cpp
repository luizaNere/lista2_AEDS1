#include <iostream>
using namespace std;

int main() {
    double vetor[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    double maior = vetor[0];
    double menor = vetor[0];

    for (int j = 1; j < 10; j++) {
        if (vetor[j] > maior) {
            maior = vetor[j];
        } else if (vetor[j] < menor) {
            menor = vetor[j];
        }
    }

    cout << "\nMaior valor = " << maior << endl;
    cout << "\nMenor valor = " << menor << endl;
}