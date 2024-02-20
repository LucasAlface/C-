#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    double metros;

    cout << "\n\n\n****** CONVERSOR DE METROS PARA CENTIMETROS ******" << endl << endl;
    cout << "Quantos metros quer converter?";
    cin >> metros;

    cout << endl << endl;

    cout << metros << " metros sao " << (metros*100) << " centimetros";

    return 0;
}
