#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> //printf, scanf, puts, NULL

using namespace std;

    int npilhas = 6, nelementos = 8;
    string p3lhas[8][6] = {
    { "", "", "", "", "", ""},
    { "", "", "", "", "", ""},
    { "", "", "", "", "", ""},
    { "", "", "", "", "", ""},
    { "", "", "", "", "", ""},
    { "", "", "", "", "", ""},
    { "", "", "", "", "", ""},
    { "", "", "", "", "", ""}
};

void mostrapilha () {
    cout << "\nA MINHA PILHA" << endl << endl;

    for (int y=nelementos-1; y>=0; y--) {
            for (int x=0; x<npilhas; x++) {
                if (x>0) cout << " | ";
                //cout << "[" << x << "][" << y << "]" ;
                if (p3lhas[x][y] != ""){
                    cout << p3lhas[x][y];
                } else{
                    cout << " ";
                }
            }

        cout << endl;

    }

    cout << "---------" << endl;
    for (int x=0; x<npilhas; x++) {
        if (x> 0 ) cout << " | ";
        cout << x;
    }

}

void pedirelemento () {
    int qualpilha;
    string elemento;
    bool encontroulivre = false;
    string jog1 = O;
    string jog2 = X;

    cout << "\n\nEm que pilha  quer colocar o elemento (0/1/2)? : ";
    cin >> qualpilha;



    for (int i=0; i<nelementos; i++) {
        if (p3lhas [qualpilha][i] == ""){
            p3lhas [qualpilha][i] = jog1;
            encontroulivre = true;
            break;
        }
    }
    if (!encontroulivre) {
        cout << "\n\nA pilha [" << qualpilha << "] nao tem posicoes livres";
    }

}


    int main () {

    int op=0;

    do{
        cout << "\nOque pretende fazer?\n";
        cout << "1 - inserir elemento em pilha\n";
        cout << "2 - mostrar pilha\n";
        cout << "0 - Sair\n";
        cin >> op;
        switch (op){
            case 1:
                pedirelemento();
                break;
            case 2:
                mostrapilha();
                break;
            default: break;
        }
    }while (op!=0);

    return 0;

    }

