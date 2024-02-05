    #include <iostream>

    using namespace std;
    /** função de inicialização do programa **/
    int main() {

        int num, soma = 0;
        string texto;
        do {
            cout << "Que numero deseja somar?" << endl;
            cin >> num;
            soma = soma + num;
            cout << texto;
        } while (num != 0);
         cout << "A soma de " << texto << " e: " << soma;




    return 0;
    }
