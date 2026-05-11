#include <iostream>
using namespace std;

int soma(int a, int b) {
    return (a + b);
}
int produto(int a, int b) {
        return (a * b);
}

int main() {
    int n1, n2;
    cout << "\nDigite um número inteiro: ";
    cin >> n1;
    cout << "\nDigite outro número inteiro: ";
    cin >> n2;
    cout << "\na + b = " << soma(n1, n2)<< endl;
    cout << "\na * b = " << produto(n1, n2) << endl;
}