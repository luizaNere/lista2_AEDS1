#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string classificar(float a, float b) {
    if (a != 0) {
        return "Determinada";
    } else if (b == 0) {
        return "Indeterminada";
    } else {
        return "Impossível";
    }
}

float solucao(float a, float b) {
    float x = -b/a;
    return x;
}

int main() {
    float a, b;
    cout << "\nEquação linear: ax + b = 0" << endl;
    cout << "\nDigite o valor de a: ";
    cin >> a;
    cout << "\nDigite o valor de b: ";
    cin >> b;

    string tipo = classificar(a, b);
    cout << "\nClassificação = " << tipo << "." << endl;

    if(tipo == "Determinada") {
        float s = solucao(a, b);
        cout << "Solução:\nx = " << setprecision(2) << s << endl; 
    }
}