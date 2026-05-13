#include <iostream>
using namespace std;

int main() {
    int vetor[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int numero, p;
    bool existe = false;
    cout << "Número para busca: ";
    cin >> numero;
    for(int i = 0; i < 8; i++) {
        if(numero == vetor[i]){
            existe = true;
            p = i;
        }
    }
    if(existe) {
        cout << "\nO número " << numero << " está na posição " << p << " do vetor." << endl;
    } else {
        cout << "\nO número " << numero << " não existe no vetor." << endl;
    }
}