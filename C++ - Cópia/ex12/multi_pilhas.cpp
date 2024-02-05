#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> //printf, scanf, puts, NULL

using namespace std;

    int npilhas = 3, nelementos = 10;
    string p3lhas[3][10] = {
    { "", "", "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", "", "", ""}
};

void mostrar() {
    cout << "\n*** A MINHA PILHA ***" << endl << endl;

    for (int y=nelementos-1; y>=0; y--) {
        for (int x=0; x<npilhas; x++) {
            if (x>0) cout << "|";
            if (p3lhas[x][y] != "") {
                cout << p3lhas[x][y];
            } else {
                cout << " ";
            }
            cout << p3lhas[x][y];
        }
    cout << endl << endl;
}
cout << "--------------" << endl;
for (int x=0; x<npilhas; x++) {
        if (x>0) cout << "|";
        cout << x;
    }
}
void pedirelemento () {
    int qualpilha;
    string elemento;
    bool encontroulivre = false;

    cout << "\n\nEm que pilha que colocar o elemento (0 / 1 / 2)? : ";
    cin >> qualpilha;
    cout << "\nQual o elemento a colocar na pilha[" << qualpilha << "] : ";
    cin >> elemento;

    for (int i=0; i<nelementos; i++) {
        if (p3lhas[qualpilha][i] == "") {
            p3lhas[qualpilha][i] = elemento;
            mostrar();
            encontroulivre = true;
            break;
        }
    }
    if (!encontroulivre) {
        cout << "\n\nA pilha[" << qualpilha << "] nao tem posicoes livres";
    }
}



int main() {

    int op = 0;
    string valor = "";

    do {
        cout << ("\n*** 3 pilhas array 2 dimensoes ***") << endl << endl;
        cout << ("\n\nO que deseja fazer? \n");
        cout << ("1 - Adicionar elemento na pilha \n");
        cout << ("2 - Mostrar pilha \n");
        cout << ("0 - Fechar App \n\n");
        cin >> op;
        switch (op) {
            case 1:
                pedirelemento();
                break;
            case 2:
                mostrar();
                break;
            default: break;

        }



    } while (op!=0);

    return 0;
}
