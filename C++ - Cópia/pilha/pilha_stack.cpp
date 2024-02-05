#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> //printf, scanf, puts, NULL

    using namespace std;

    double resultado = 0;
    string pilha[6];
    int posicao = 0;
    int op;

    void push() {
        if (posicao < 6) {
            cout << "Escreva um numero para inserir na pilha\n";
            cin >> pilha[posicao];
            posicao++;

        } else {
            cout << "\n\t** Nao tens posicoes disponiveis, retira um elemento antes de adicionar outro" ;
        }
    }

    void pop() {
        if (posicao>0) {
            cout << "\n\t** Retirou este elemento da pilha: ";
            cout << pilha[posicao-1] << endl << endl;
            posicao--;
        } else {
            cout << "\n\t** A pilha esta vazia!\n\n";
        }
    }

    void top() {
        if (posicao>0) {
        cout << pilha[posicao-1];
        } else {
            cout << "\n\t** A pilha esta vazia!\n\n";
        }
    }

    void mostrar() {
        for (int i=0; i<posicao; i++) {
            cout << "\n\tPilha [" << i << "] = " << pilha[i] << endl;
        }
    }


int main() {

    do {

        printf("\n\nO que deseja fazer? \n");
        printf("1 - Adicionar elemento na pilha \n");
        printf("2 - Retirar elemento na pilha \n");
        printf("3 - Mostrar topo da pilha \n");
        printf("4 - Mostrar pilha \n");
        printf("0 - Fechar App \n\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                top();
                break;

            case 4:
                mostrar();
                break;


        }


    } while (op != 0);


        return 0;

    }
