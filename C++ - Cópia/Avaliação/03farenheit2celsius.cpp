#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    double farenheit;

    cout << "\n\n\n****** CONVERSOR FARENHEIT PARA CELSIUS ******" << endl << endl;
    cout << "Indique uma temperatura";
    cin >> farenheit;

    cout << endl << endl;

    cout << farenheit << " graus farenheit sao " << (5 * (farenheit-32) / 9) << " graus celsius";



    return 0;
}
