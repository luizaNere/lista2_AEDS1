#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    float nota1, nota2, nota3;
    float soma;
    string situacao;
};

Aluno lerAluno() {
    Aluno a;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, a.nome);
    cout << "Nota 1: "; cin >> a.nota1;
    cout << "Nota 2: "; cin >> a.nota2;
    cout << "Nota 3: "; cin >> a.nota3;
    a.soma = a.nota1 + a.nota2 + a.nota3;
    a.situacao = (a.soma >= 60) ? "Aprovado" : "Reprovado";
    return a;
}

void exibirAluno(Aluno a) {
    cout << "Nome: " << a.nome << endl
         << "Soma: " << a.soma << endl
         << "Situação: " << a.situacao << "\n";
}

int main() {
    const int N = 100;
    Aluno alunos[N];

    for (int i = 0; i < N; i++) {
        cout << "\n=== Aluno " << (i + 1) << " ===\n";
        alunos[i] = lerAluno();
    }

    cout << string(50, '-') << endl;
    cout << "\nResultado Final" << endl;
    for (int i = 0; i < N; i++)
        exibirAluno(alunos[i]);
}