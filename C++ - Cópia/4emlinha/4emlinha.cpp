#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

const int linhas = 6;
const int colunas = 8; // a quantidade de linhas e colunas não varia, por isso declaramos como constante, além de permitir declarar em parâmetros
int jogador = 1;
string elemento1 = "X";
string elemento2 = "O";
int contador = 0;
int vencedor;


void mostrartabuleiro(const string tabuleiro[linhas][colunas]) {
    cout << endl;
    for (int x = linhas - 1; x >= 0; x--) {
        for (int y = 0; y < colunas; y++) {
            cout << " | " /* criação de colunas */ << (tabuleiro[x][y].empty() ? " " : tabuleiro[x][y]); // ? = if : = else .empty() verifica se está vazio, ? deixa um espaço em branco : adiciona o elemento
        }
        cout << " |" << endl; // adiciona uma | extra por estética e cria as linhas
    }
    cout << " ---------------------------------" << endl << "   1   2   3   4   5   6   7   8"; // estilização manual do tabuleiro
    cout << endl << endl;
    contador++; // conta a quantidade de jogadas
}


void iniciojogo(string tabuleiro[linhas][colunas]) {

    int qualColuna;
    bool encontroulivre = false;

    if (jogador == 1) {
        cout << "*** TURNO " << contador << " ***" << endl << endl;
        cout << "Vez do jogador " << jogador << endl;
        cout << "ESCOLHE UMA COLUNA ";
        cin >> qualColuna;
        // arrays começam em 0!!
        qualColuna -= 1;
        if (qualColuna >= 0 && qualColuna <= colunas-1) {
            for (int i=0; i<linhas; i++) {
                if (tabuleiro[i][qualColuna] == "") {
                    tabuleiro[i][qualColuna] = elemento1;
                    encontroulivre = true;
                    mostrartabuleiro (tabuleiro);
                    jogador++; // troca de jogadores
                    break;
                }
            }
            if (!encontroulivre) {
                cout << "\n\n\tA COLUNA " << qualColuna+1 /* a coluna está em -1 */ << " ESTA CHEIA!!!\n" << endl;
            }
        } else {
            cout << "\n\nESCOLHA UMA COLUNA VALIDA !!\n\n";
        }
    }
    if (jogador == 2) {
        cout << "*** TURNO " << contador << " ***" << endl << endl;
        cout << "Vez do jogador " << jogador << endl;
        cout << "ESCOLHE UMA COLUNA ";
        cin >> qualColuna;
        // arrays começam em 0!!
        qualColuna -= 1;
        if (qualColuna >= 0 && qualColuna <= colunas-1) {
            for (int i=0; i<linhas; i++) {
                if (tabuleiro[i][qualColuna] == "") {
                    tabuleiro[i][qualColuna] = elemento2;
                    encontroulivre = true;
                    mostrartabuleiro (tabuleiro);
                    jogador--; // troca de jogadores
                    break;
                }
            }
            if (!encontroulivre) {
                cout << "\n\n\tA COLUNA " << qualColuna+1 /* a coluna está em -1 */ << " ESTA CHEIA!!!\n" << endl;
            }
        } else {
            cout << "\n\nESCOLHA UMA COLUNA VALIDA !!\n\n";
        }

    }
}

bool tabuleirocheio(bool jogoterminou) {
    if (contador == 49) { // 48 posições do tabuleiro + 1 amostra do tabuleiro antes de qualquer jogada
        cout << "\n\n******* EMPATE *******\n\n";
    }
    return true;
}

bool alguemganhou(const string tabuleiro[linhas][colunas]) {
    // Verificar horizontalmente
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas - 3; ++j) {
            if (tabuleiro[i][j] != "" && tabuleiro[i][j] == tabuleiro[i][j + 1] &&
                tabuleiro[i][j + 1] == tabuleiro[i][j + 2] && tabuleiro[i][j + 2] == tabuleiro[i][j + 3]) {
                return true;
            }
        }
    }

    // Verificar verticalmente
    for (int j = 0; j < colunas; ++j) {
        for (int i = 0; i < linhas - 3; ++i) {
            if (tabuleiro[i][j] != "" && tabuleiro[i][j] == tabuleiro[i + 1][j] &&
                tabuleiro[i + 1][j] == tabuleiro[i + 2][j] && tabuleiro[i + 2][j] == tabuleiro[i + 3][j]) {
                return true;
            }
        }
    }

    // Verificar diagonal descendente (\)
    for (int i = 0; i < linhas - 3; ++i) {
        for (int j = 0; j < colunas - 3; ++j) {
            if (tabuleiro[i][j] != "" && tabuleiro[i][j] == tabuleiro[i + 1][j + 1] &&
                tabuleiro[i + 1][j + 1] == tabuleiro[i + 2][j + 2] && tabuleiro[i + 2][j + 2] == tabuleiro[i + 3][j + 3]) {
                return true;
            }
        }
    }

    // Verificar diagonal ascendente (/)
    for (int i = 3; i < linhas; ++i) {
        for (int j = 0; j < colunas - 3; ++j) {
            if (tabuleiro[i][j] != "" && tabuleiro[i][j] == tabuleiro[i - 1][j + 1] &&
                tabuleiro[i - 1][j + 1] == tabuleiro[i - 2][j + 2] && tabuleiro[i - 2][j + 2] == tabuleiro[i - 3][j + 3]) {
                return true;
            }
        }
    }

    return true;
}

void terminoujogo(const string tabuleiro[linhas][colunas], bool jogoterminou) {
    alguemganhou(tabuleiro);
    tabuleirocheio(jogoterminou);
}

int main() {
    string tabuleiro[linhas][colunas] = {}; // Inicializa o tabuleiro com células vazias
    bool jogoterminou = false;

    cout << "***** 4 EM LINHA *****" << endl;
    cout << "----------------------" << endl;

    mostrartabuleiro(tabuleiro); // Mostra o tabuleiro antes de qualquer jogada

    do {
        terminoujogo (tabuleiro, jogoterminou);
        iniciojogo(tabuleiro); // Realiza uma jogada
    } while (jogoterminou == false);
    return 0;
}


