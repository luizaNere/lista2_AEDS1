#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void imprimir(string n[], float p1[], float p2[], float m[], int a) {
    // encontra o maior nome para ajustar a largura da coluna
    int largura = 0;
    for (int i = 0; i < a; i++) {
        if ((int)n[i].size() > largura)
            largura = n[i].size();
    }
    largura += 2; // espaço extra entre nome e PR1

    cout << "\n" << left << setw(largura) << "Nome"
         << setw(10) << "PR1"
         << setw(10) << "PR2"
         << setw(10) << "Média" << endl;
    cout << string(largura + 30, '-') << endl;

    for (int i = 0; i < a; i++) {
        cout << left  << setw(largura) << n[i]
             << setw(10) << fixed << setprecision(2) << p1[i]
             << setw(10) << p2[i]
             << setw(10) << m[i] << endl;
    }
}

float mediaGeral(float m[], int a) {
    float soma = 0;
    for(int i = 0; i < a; i++) {
        soma += m[i];
    }
    return soma/a;
}

int main() {
    int alunos = 5;
    string nomes[alunos];
    float notas1[alunos], notas2[alunos], medias[alunos];

    for(int i = 0; i < alunos; i++) {
        cout << endl << "ALUNO " << i+1 << ": " << endl;
        cout << "Nome: ";
        getline(cin, nomes[i]);

        cout << "Nota na Prova 1: ";
        cin >> notas1[i];

        cout << "Nota na Prova 2: ";
        cin >> notas2[i];

        medias[i] = (notas1[i] + notas2[i]) / 2.0;

        cin.ignore();
    }

    imprimir(nomes, notas1, notas2, medias, alunos);
    cout << endl << "Média geral da turma = " << mediaGeral(medias, alunos) << endl;
}