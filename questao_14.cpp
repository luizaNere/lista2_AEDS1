#include <iostream>
#include <string>
#include <cctype>
using namespace std;

const int QUESTOES = 10;
const int ALUNOS = 36;
const float NOTA_MINIMA = 6.0;

void lerGabarito(char gabarito[]) {
    cout << "Digite o gabarito (" << QUESTOES << " respostas): ";
    for (int i = 0; i < QUESTOES; i++) {
        cout << "\nResposta da questão " << i+1 << ": ";
        cin >> gabarito[i];
        gabarito[i] = toupper(gabarito[i]);
    }
}

float corrigirProva(char gabarito[], char respostas[]) {
    float nota = 0;
    for (int i = 0; i < QUESTOES; i++)
        if (respostas[i] == gabarito[i])
            nota++;
    return nota;
}

int main() {
    char gabarito[QUESTOES];
    int matricula[ALUNOS];
    char respostas[ALUNOS][QUESTOES];
    float notas[ALUNOS];

    lerGabarito(gabarito);

    for (int i = 0; i < ALUNOS; i++) {
        cout << "\nAluno " << (i + 1) << "\n- Numero de matricula: ";
        cin >> matricula[i];
        cout << "Respostas (" << QUESTOES << " letras): ";
        for (int j = 0; j < QUESTOES; j++) {
            cout << "\nQuestão " << i+1 << ": ";
            cin >> respostas[i][j];
            respostas[i][j] = toupper(respostas[i][j]);
        }
        notas[i] = corrigirProva(gabarito, respostas[i]);
    }

    cout << string(40, '-') << endl << "RESULTADO" << endl;
    cout << "Aluno\tNota\tSituacao\n";
    int aprovados = 0;
    for (int i = 0; i < ALUNOS; i++) {
        string situacao = (notas[i] >= NOTA_MINIMA) ? "Aprovado" : "Reprovado";
        if (notas[i] >= NOTA_MINIMA) 
            aprovados++;
        cout << matricula[i] << "\t" << notas[i] << "\t" << situacao << "\n";
    }

    cout << string(40, '-') << endl;
    float pct = (aprovados / (float)ALUNOS) * 100.0;
    cout << "\nAprovados: " << aprovados << " de " << ALUNOS;
    cout << " (" << pct << "%)\n";
}
