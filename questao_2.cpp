#include <iostream>
#include <iomanip>
using namespace std;

float milimetros(float pol) {
    return 25.4 * pol;
}

int main() {
    char barra;
    int a, b;
    do {
        cout << "\nDigite a medida em polegadas no formato a/b: ";
        cin >> a >> barra >> b;
    } while(b==0);

    float polegadas = (1.0*a)/b;

    cout << endl << setprecision(3) << polegadas << " polegadas = "
         << milimetros(polegadas) << " milímetros." << endl;
}