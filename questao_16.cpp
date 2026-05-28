#include <iostream>
#include <string>
using namespace std;

struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    Data    data;
    Horario horario;
    string  descricao;
};

void lerHorario(Horario& h) {
    cout << "Hora: ";    cin >> h.hora;
    cout << "Minutos: "; cin >> h.minutos;
    cout << "Segundos: ";cin >> h.segundos;
}

void lerData(Data& d) {
    cout << "Dia: ";  cin >> d.dia;
    cout << "Mes: ";  cin >> d.mes;
    cout << "Ano: ";  cin >> d.ano;
}

void lerCompromisso(Compromisso& c) {
    cout << string(50, '-') << endl;
    cout << "Data do compromisso: " << endl;
    lerData(c.data);
    cout << string(50, '-') << endl;
    cout << "Horario do compromisso: \n";
    lerHorario(c.horario);
    cout << "Descrição: ";
    cin.ignore();
    getline(cin, c.descricao);
}

void exibirCompromisso(const Compromisso& c) {
    cout << string(50, '-') << endl;
    cout << "\nCompromisso\n";
    cout << "Data: "    << c.data.dia << "/" << c.data.mes << "/" << c.data.ano << "\n";
    cout << "Horario: " << c.horario.hora << ":" << c.horario.minutos << ":" << c.horario.segundos << "\n";
    cout << "Descricao: " << c.descricao << "\n";
}

int main() {
    Compromisso comp;
    lerCompromisso(comp);
    exibirCompromisso(comp);
}
