#include <iostream>

using namespace std;
/** funcção de inicialização do programa **/
int main() {

    string nome,sobrenome;
    string nomecompleto;

    nome = "Filipe";
    sobrenome = "Soblirov";
    //nomecompleto = nome + " " +sobrenome;
    //nomecompleto = nome.append(" ").append(sobrenome);
    nomecompleto = nome;
    nomecompleto += " ";
    nomecompleto += sobrenome;

    cout << nomecompleto;
    cout << ", o teu nome tem " << (nomecompleto.length() - 1);
    //cout << ", o teu nome tem " << (nomecompleto.size() - 1);
    cout << "caracteres";

    cout << "\n\n a primeira letra do teu sobrenome e: ";
    cout << sobrenome[0] << " " << sobrenome [2];
    sobrenome[2] = '-';
    cout << "\n\n a primeira letra do teu sobrenome e: ";
    cout << sobrenome[0] << " " << sobrenome [2];

    string txt = "\n Eu sou o maior\"da turma\".";
    cout << endl << txt;
}
