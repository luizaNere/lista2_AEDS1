#include <iostream>
#include <iomanip>
using namespace std;

float liquido(int h, float sph) {
    float bruto = h*sph;
    float desconto;
    if(bruto < 100) {
        desconto = 0;
    } else if(bruto >= 100 && bruto <= 200) {
        desconto = bruto/10;
    } else {
        desconto = bruto/5;
    }
    return bruto-desconto;
}

int main() {
    cout << fixed << setprecision(2);
    int horas;
    float salariohora;
    cout << "Horas trabalhadas: ";
    cin >> horas;
    cout << "Salário por hora: R$";
    cin >> salariohora;

    cout << "\nSalário líquido = R$" << liquido(horas, salariohora) << endl;
}