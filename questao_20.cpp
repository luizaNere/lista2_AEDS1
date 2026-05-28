#include <iostream>
#include <string>
using namespace std;

struct Carro {
    string marca; // max 15 letras
    int ano;
    float preco;
};

void lerCarro(Carro& c) {
    cout << "Marca (max 15 letras): ";
    cin.ignore();
    getline(cin, c.marca);
    if (c.marca.size() > 15) 
        c.marca = c.marca.substr(0, 15);

    cout << "Ano: ";
    cin >> c.ano;

    cout << "Preco: R$ ";
    cin >> c.preco;
}

void buscarPorPreco(Carro carros[], int n, float p) {
    bool achou = false;
    cout << "\n-> Carros com preco menor que R$ " << p << endl;
    for (int i = 0; i < n; i++) {
        if (carros[i].preco < p) {
            cout << "Marca: " << carros[i].marca << endl
                 << "Ano: "   << carros[i].ano << endl
                 << "Preco: R$ " << carros[i].preco << endl;
            achou = true;
        }
    }
    if (!achou) 
        cout << "Nenhum carro encontrado abaixo de R$ " << p << ".\n";
}

int main() {
    const int N = 5;
    Carro frota[N];

    for (int i = 0; i < N; i++) {
        cout << "\nCARRO " << (i + 1) << endl;
        lerCarro(frota[i]);
    }

    float valorMax;
    cout << "\nDigite o valor limite (p): R$ ";
    cin >> valorMax;

    buscarPorPreco(frota, N, valorMax);
}
