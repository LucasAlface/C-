#include <iostream>
#include <string>

using namespace std;

string conv_array_string(string meuarray[], int inicio, int tamanho) {
    if (inicio < tamanho) {
        return meuarray[inicio] + conv_array_string(meuarray, inicio+1, tamanho);
    } else {
        return "";
    }
}

int main() {
    string letras[] = {"L", "u", "c", "a", "s"};
    int tamanho = 6;
    cout << conv_array_string(meuarray[], 0, tamanho);
    return 0;
}
