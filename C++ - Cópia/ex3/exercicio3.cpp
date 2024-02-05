    #include <iostream>

    using namespace std;

    /** função de inicialização do programa **/
    int main() {

        char letra1, letra2;

        cout << "vai selecionar 2 caminhos: \n";
        cout << "U - Up \nD - Down \nR - Right \nL - Left \n";
        cout << "\n  1. caminho?";
        cin >> letra1;
        cout << "\n  2. caminho?";
        cin >> letra2;

        //cout << "R: " << letra1 << letra2;

        if (((letra1 == 'U') && (letra2 == 'U'))
            || ((letra1 == 'R') && (letra2 == 'D'))) {
            cout << ":-| tou com fita cola na boca";

        } else if (((letra1 == 'U') && (letra2 == 'R'))
            || ((letra1 == 'R') && (letra2 == 'R'))) {
            cout << ")-: tou tiste";

        } else if (((letra1 == 'U') && (letra2 == 'L'))
            || ((letra1 == 'U') && (letra2 == 'D'))
            || ((letra1 == 'D') && (letra2 == 'R'))
            || ((letra1 == 'D') && (letra2 == 'L'))
            || ((letra1 == 'L') && (letra2 == 'L'))
            || ((letra1 == 'R') && (letra2 == 'L'))) {
        cout << "/-: tou Meh OMG CARTI REFERENCE";

        } else if (((letra1 == 'D') && (letra2 == 'U'))
            || ((letra1 == 'D') && (letra2 == 'D'))
            || ((letra1 == 'L') && (letra2 == 'U'))
            || ((letra1 == 'L') && (letra2 == 'R'))
            || ((letra1 == 'L') && (letra2 == 'D'))
            || ((letra1 == 'R') && (letra2 == 'U'))) {
            cout << ":-) tou contente";



        } else {
            // dar indicação ao utilizador que esscreveu alguma coisa mal
            cout << "Caminho nao encontrado";
        }

        return 0;
    }



