#include <iostream>
#include <string>

using namespace std;

int main() {

    string varx = "Lucas";
    string* vary = &varx;

    cout << "Varx = " << varx << endl;
    cout << "Varx na posicao de memoria : " << varx << endl;

    cout << "Vary (referencia memoria?) : " << vary << endl;
    cout << "Vary (esta a apontar para Varx) : " << *vary << endl;

    *vary = "Soares";

    cout << "Varx = " << varx << endl;
    cout << "Varx na posicao de memoria : " << varx << endl;

    cout << "Vary (referencia memoria?) : " << vary << endl;
    cout << "Vary (esta a apontar para Varx) : " << *vary << endl;

    return 0;
}
