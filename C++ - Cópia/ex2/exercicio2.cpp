    #include <iostream>

    using namespace std;

    /** função de inicialização do programa **/
    int main() {

        int i;
        float x, base, expoente, resultado = 1;

    // /n = quebra de linha /t = tab
        cout << "________________________________________________________________________________________________________________________";
        cout << "\n\t";
        cout << "Bom dia ";
        cout << ", \n\n\t Vamos criar a exponiciacao de um numero\n";

        cout << "\n \t Digite o numero base: " << endl;
        cin >> base;

        cout << "\n \t Digite o expoente: " << endl;
        cin >> expoente;

        //system("cls"); //limpar tela

        if (expoente > 0) {
            for (i=1; i <= expoente; i++) {
                resultado = resultado * base;
            }
            cout << "O   resultado " << resultado;
        } else if (expoente == 0) {
            cout << " \t O resultado = 1";
        } else {
           for (i=1; i <= (expoente * -1); i++) {
                resultado = resultado * base;
                cout << resultado << endl;
            }
            x = float (1.0/2.0);
            cout << x << endl;
            cout << "O   resultado = " << (1 / resultado);
        }

        return 0;
    }
