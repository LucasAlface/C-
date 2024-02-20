#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    int num1;
    int num2;
    float num3;
    int i = 0;

    cout << "\n\n\n****** ANORMAL ******" << endl << endl;
    cout << "Diga um numero inteiro";
    cin >> num1;
    cout << "Diga outro numero inteiro";
    cin >> num2;
    cout << "Diga um numero real";
    cin >> num3;

    cout << endl << endl;

    cout << "("<< num1 << " * 2) * " << "(" << num2 << " / 2 ) = " << (num1 * 2) * (num2 / 2) << endl;
    cout << "("<< num1 << " * 2) + " << num3 << " = " << (num1 * 2) + (num3) << endl;

    double resultado = 1;
    i = 1;
    while (i <= 3){
        resultado *= num3;
        i++;
    }
    cout << num3 << " ^ 3 = " <<  resultado;

    return 0;
}
