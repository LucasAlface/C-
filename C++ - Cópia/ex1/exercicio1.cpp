    #include <iostream>

    using namespace std;

    /** função de inicialização do programa **/
    int main() {

        const double pi = 3.1416;
        int numero;
        string nome, sobrenome, resposta;

        nome = sobrenome = "Lucas";
        sobrenome = "Soares";

        cout << "________________________________________________________________________________________________________________________";
        cout << "\n\t";
        cout << "Bom dia " << nome << " " << sobrenome;
        cout << ", \n\n\t Escreve um numero\n";
        cout << "Resposta: " << endl;
        // /n = quebra de linha /t = tab

        cin >> numero;

        //system("cls"); //limpar tela

        if (numero >= 0) {
            cout << "O " << numero << " ao quadrado = " << (numero * numero) << endl;
        } else if (numero == 0) {
            cout << " \t 0 x 0 = 0 oh zezo";
        } else {
            cout << " \t Apenas aceitamos numeros positivos!";
        }




        return 0;
    }
