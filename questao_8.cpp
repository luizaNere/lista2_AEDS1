#include <iostream>
#include <string>
using namespace std;

int const MAXIMO = 100;

void total21(int i[], int t) {
    int total = 0;
    for(int j = 0; j < t; j++) {
        if(i[j] < 21) {
            total++;
        }
    }
    cout << "\nTotal de pessoas com menos de 21 anos: " << total << endl;
}

void total50(int i[], int t) {
    int total = 0;
    for(int j = 0; j < t; j++) {
        if(i[j] > 50) {
            total++;
        }
    }
    cout << "\nTotal de pessoas com mais de 50 anos: " << total << endl;
}

int main() {
    int idades[MAXIMO];
    int total = 0;
    string controle;

    while(total < MAXIMO) {
        cout << endl << "Digite uma idade (ou 'FIM' para encerrar): ";
        getline(cin, controle);
        
        if(controle == "FIM") {
            break;
        }

        idades[total] = stoi(controle);
        total++;
    }

    cout << endl;
    total21(idades, total);
    total50(idades, total);
}