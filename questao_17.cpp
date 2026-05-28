#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    string endereco;
};

void lerPessoa(Pessoa& p) {
    cout << "Nome: ";
    cin.ignore();
    getline(cin, p.nome);
    cout << "Idade: ";
    cin >> p.idade;
    cout << "Endereco: ";
    cin.ignore();
    getline(cin, p.endereco);
}

void exibirPessoa(const Pessoa& p) {
    cout << string(50, '-') << endl;
    cout << "\nDados Pessoais\n";
    cout << "Nome: " << p.nome << "\n";
    cout << "Idade: " << p.idade << "\n";
    cout << "Endereco: " << p.endereco << "\n";
}

int main() {
    Pessoa p;
    lerPessoa(p);
    exibirPessoa(p);
}
