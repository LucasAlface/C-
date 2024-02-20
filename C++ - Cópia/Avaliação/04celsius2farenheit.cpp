#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    double celsius;

    cout << "\n\n\n****** CONVERSOR CELSIUS PARA FARENHEIT ******" << endl << endl;
    cout << "Indique uma temperatura";
    cin >> celsius;

    cout << endl << endl;

    cout << celsius << " graus celsius sao " << (celsius * 9 / 5 + 32 ) << " graus farenheit";

    return 0;
}
