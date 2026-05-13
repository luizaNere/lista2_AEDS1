#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(2);

    int q = 20, idade;
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    float peso, p1 = 0, p2 = 0, p3 = 0, p4 = 0;

    for (int i = 1; i <= q; i++) {
        cout << endl << "Indivíduo " << i << endl;
        cout << "Idade (>1): ";
        cin >> idade;
        cout << "Peso (Kg): ";
        cin >> peso;
        if (idade >= 1 && idade <= 10) {
            f1++;
            p1 += peso;
        } else if (idade >= 11 && idade <= 20) {
            f2++;
            p2 += peso;
        } else if (idade >= 21 && idade <= 30) {
            f3++;
            p3 += peso;
        } else {
            f4++;
            p4 += peso;
        }
    }

    cout << "\nMédia de peso de 1 a 10 anos = " << p1/f1 << endl;
    cout << "\nMédia de peso de 11 a 20 anos = " << p2/f2 << endl;
    cout << "\nMédia de peso de 21 a 30 anos = " << p3/f3 << endl;
    cout << "\nMédia de peso acima dos 30 anos = " << p4/f4 << endl;
}