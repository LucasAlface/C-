#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> //printf, scanf, puts, NULL

//ex13_functions

using namespace std;

void naodevolvenada() {
}

int devolveinteiro() {
}

int devolveinteiro_recebeinteiro(int x) {
    return x*x;
}

int factorial(int numero){
    if (numero>=2) {
        return numero * factorial(numero - 1);
    } else {
        return 1;
    }

}

int potencia(int base,int expoente) {
    if (expoente>=1) {
        return base * potencia(base, expoente - 1);
    } else if (expoente == 0) {
        return 1;
    } else {
        return base;
    }
}

int * inverterarray(int omeuarray[], int inicio, int fim) {
    int aux;
    if (inicio<fim) {
        aux = omeuarray[inicio];
        omeuarray[fim] = aux;
        inverterarray (omeuarray, (inicio+1), (fim-1));
    }
}

int main() {

    int arrayNum[10] = {1,2,3,4,5,6,7,8,9,10};
    int arraylength = 9;

    cout << inverterarray;

    /*cout << devolveinteiro_recebeinteiro(2) << endl;
    cout << devolveinteiro_recebeinteiro(3) << endl;
    cout << devolveinteiro_recebeinteiro(4) << endl;
    cout << devolveinteiro_recebeinteiro(5) << endl;
    */

    return 0;
}
