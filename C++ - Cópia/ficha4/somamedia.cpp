    #include <iostream>

    using namespace std;
    /** função de inicialização do programa **/
    int main() {

        int num, soma = 0, quant = 0;
        float media = 0;
        string somaTxt = "";

        cout << "\nSomar numeros ate que digite a tecla 0\n\n";

        do {
            cout << "\nDiga qual e o numero a somar: ";
            cin >> num;
            if (num != 0) {
                if (somaTxt != "") somaTxt += " + ";
            }
            somaTxt += to_string(num);
            soma += num;
            quant++;
        } while (num != 0);

        cout << "Inseriu " << quant << " numeros" << endl;
        cout << "\nResultado de (" << somaTxt << ") = " << soma << endl;
        cout << "\nMedia de (" << somaTxt << ")/" << quant;

        media = ((float) soma / (float)quant);
        cout << " = " << media;
        cout << endl;

        return 0;

    }
