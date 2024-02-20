#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    double horas;
    double rendimento;
    double salario;
    int meses = 12;

    cout << "\n\n\n****** CALCULADORA DE RENDIMENTO ******" << endl << endl;
    cout << "Quanto ganha por hora?";
    cin >> rendimento;
    cout << "Quantas horas trabalha por mes?";
    cin >> horas;

    salario = (rendimento * horas);

    cout << endl << endl;

    cout << "Voce ganha " << salario << " de salario por mes" << endl;
    cout << "E ganha aproximadamente " << (salario * meses) << " por ano";

    return 0;
}
