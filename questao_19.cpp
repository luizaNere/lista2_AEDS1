#include <iostream>
#include <string>
using namespace std;

struct Livro {
    string titulo; // max 30 letras
    string autor;  // max 15 letras
    int ano;
};

void lerLivro(Livro& l) {
    cout << "Titulo (max 30 letras): ";
    cin.ignore();
    getline(cin, l.titulo);
    if (l.titulo.size() > 30) 
        l.titulo = l.titulo.substr(0, 30);
    
    cout << "Autor (max 15 letras): ";
    getline(cin, l.autor);
    if (l.autor.size() > 15) 
        l.autor = l.autor.substr(0, 15);
    
    cout << "Ano: ";
    cin >> l.ano;
}

void buscarPorAno(Livro livros[], int n, int ano) {
    bool achou = false;
    cout << "\n-> Livros publicados em " << ano << endl;
    for (int i = 0; i < n; i++) {
        if (livros[i].ano == ano) {
            cout << "Titulo: " << livros[i].titulo << endl
                 << "Autor: " << livros[i].autor << endl
                 << "Ano: "   << livros[i].ano << endl;
            achou = true;
        }
    }
    if (!achou) 
        cout << "Nenhum livro encontrado para o ano " << ano << ".\n";
}

int main() {
    const int N = 5;
    Livro biblioteca[N];

    for (int i = 0; i < N; i++) {
        cout << "\nLIVRO " << (i + 1) << ": \n";
        lerLivro(biblioteca[i]);
    }

    int anoBusca;
    cout << "\nDigite o ano para pesquisa: ";
    cin >> anoBusca;

    buscarPorAno(biblioteca, N, anoBusca);
}
