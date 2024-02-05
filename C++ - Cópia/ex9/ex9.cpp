    #include <iostream>

    using namespace std;
    /** função de inicialização do programa **/
    int main() {


        int nidades = 0, i = 0, soma = 0, idadeaux;
        float media;

        cout << "Quantas idades vai inserir?" << endl;
        cin >> nidades;
        cout << endl << endl;
        int idades [nidades];


        while (nidades>i) {

                cout << "Escreva a idade do numero " << i+1 << endl;
                cin >> idadeaux;
                if (idadeaux>0) {
                    idades[i] = idadeaux;
                    soma += idadeaux;
                    i++;
                }
                    }

        media = ((float) soma / (float)i);
        cout << "\nA media das idades inseridas e: " << media;

        return 0;

    }
