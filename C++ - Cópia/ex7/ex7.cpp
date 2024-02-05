    #include <iostream>

    using namespace std;

    /** função de inicialização do programa **/
    int main() {

        int i = 0;

        while (i < 0) {
            cout << i << "\n";
            i++;
        }

        string nome = "Lucas";
        while (i < 5) {
            cout << nome[i] << endl;
            i = i + 1;
        }
    int base , expoente;
        cout << "\n \t Digite o numero base: " << endl;
        cin >> base;

        cout << "\n \t Digite o expoente: " << endl;
        cin >> expoente;

        int resultado = 1;
        i = 1;
        while (i <= expoente){
            resultado *= base;
            i++;
        }
        cout << resultado << endl;

        i = 1; // exemplo ranhosoooo w3schools para o hilario !!!
        resultado = 1;
        if (expoente > 0){
            do {
                resultado *= base;
                i++;
            }
            while (i <= expoente);
        }
        cout << resultado;

    return 0;
    }
