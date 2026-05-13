#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int opn, idade, soma = 0;
    int um = 0, dois = 0, tres = 0;
    for(int i = 0; i < 20; i++) {
        cout << "\nDigite sua idade: ";
        cin >> idade;
        soma += idade;
        cout << "\nSua opinião sobre o filme:\n1- Regular\n2- Bom\n3- Excelente\n-> ";
        cin >> opn;
        switch(opn) {
            case 1:
                um++;
                break;
            case 2:
                dois++;
                break;
            case 3:
                tres++;
                break;
            default:
                cout << "\nValor inválido!" << endl;
        }
    }
    cout << "\nMédia de idade = " << fixed << setprecision(2) << (soma/20) << endl;

    float p1, p2, p3;
    p1 = 100*um/20.0;
    p2 = 100*dois/20.0;
    p3 = 100*tres/20.0;

    cout << fixed << setprecision(2);
    cout << "\nPercentagem de cada avaliação:\nRegular = " << fixed << setprecision(2) << p1
         << "%\nBom = " << p2 << "%\nExcelente = " << p3 << "%\n";
}