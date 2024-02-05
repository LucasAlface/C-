#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

struct fAluno {
    int numeroAluno;
    string nomeAluno;
    int anosAluno;
};

int main() {

    fAluno fichaAluno;
    fichaAluno.numeroAluno = 14581;
    fichaAluno.nomeAluno = "Lucas Soares";
    fichaAluno.anosAluno = 24;

    cout << "Aluno: " << fichaAluno.nomeAluno;
    cout << ", tem o num aluno: " << fichaAluno.numeroAluno;
    cout << " e tem " << fichaAluno.anosAluno << " anos." << endl;

    fAluno fichaAluno2;
    fichaAluno2.numeroAluno = 69420;
    fichaAluno2.nomeAluno = "Sucas Loares";
    fichaAluno2.anosAluno = 3;

    cout << "Aluno: " << fichaAluno2.nomeAluno;
    cout << ", tem o num aluno: " << fichaAluno2.numeroAluno;
    cout << " e tem " << fichaAluno2.anosAluno << " anos." << endl;


    return 0;
}
