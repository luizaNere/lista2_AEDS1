#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Data {
    int dia, mes, ano;
};

struct Funcionario {
    string nome;
    int idade;
    char sexo; // 'M' ou 'F'
    string cpf;
    Data dataNasc;
    int codigoSetor; // 0-99
    string cargo; // até 30 caracteres
    float salario;
};

void lerFuncionario(Funcionario& f) {
    char barra;

    cout << "Nome: ";
    cin.ignore();
    getline(cin, f.nome);

    cout << "Idade: ";
    cin >> f.idade;

    do {
        cout << "Sexo (M/F): ";
        cin >> f.sexo;
    } while (f.sexo != 'M' && f.sexo != 'F');

    cout << "CPF: ";
    cin >> f.cpf;

    cout << "Data de nascimento (dd/mm/aaaa): ";
    cin >> f.dataNasc.dia >> barra >> f.dataNasc.mes >> barra >> f.dataNasc.ano;

    do {
        cout << "Codigo do setor (0-99): ";
        cin >> f.codigoSetor;
    } while (f.codigoSetor > 99);

    cout << "Cargo (ate 30 caracteres): ";
    cin.ignore();
    getline(cin, f.cargo);
    if (f.cargo.size() > 30) f.cargo = f.cargo.substr(0, 30);

    cout << "Salario: R$ ";
    cin >> f.salario;
}

void exibirFuncionario(const Funcionario& f, int num) {
    cout << "\n- Funcionario " << num << endl;
    
    cout << "Nome: " << f.nome << "\n";
    cout << "Idade: " << f.idade << "\n";
    cout << "Sexo: " << f.sexo << "\n";
    cout << "CPF: " << f.cpf << "\n";
    cout << "Nascimento: " << f.dataNasc.dia << "/" << f.dataNasc.mes << "/" << f.dataNasc.ano << "\n";
    cout << "Setor: " << f.codigoSetor << "\n";
    cout << "Cargo: " << f.cargo << "\n";
    cout << "Salario: R$" << f.salario << "\n";
}

int main() {
    const int N = 10;
    Funcionario equipe[N];

    for (int i = 0; i < N; i++) {
        cout << "\n-> Dados do Funcionario " << (i + 1) << endl;
        lerFuncionario(equipe[i]);
    }

    cout << "\n-> LISTAGEM DE FUNCIONÁRIOS" << endl;
    for (int i = 0; i < N; i++)
        exibirFuncionario(equipe[i], i + 1);
}
