#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

struct carros {
    string marca;
    string modelo;
    string versao;
    string matricula;
    double ano;
    string proprietario;
};

int main() {

    int ano = 2024;
    int meses = 12;
    int dias = 365;
    float diasaux = 365;
    float mediaMeses = dias / meses;
    double mediaAno;
    double mediaIdade;
    int mediaAux;
    double decimal, decimalDias;

    carros carro1;
        carro1.marca = "Mazda";
        carro1.modelo = "Miata";
        carro1.versao = "69.E14";
        carro1.matricula = "69-69-DZ";
        carro1.ano = 1991;
        carro1.proprietario = "Hinokami";

    carros carro2;
        carro2.marca = "Nissan";
        carro2.modelo = "Primera";
        carro2.versao = "16.Exl";
        carro2.matricula = "53-82-BD";
        carro2.ano = 1989;
        carro2.proprietario = "Pedro";

    carros carro3;
        carro3.marca = "Honda";
        carro3.modelo = "Jazz";
        carro3.versao = "Cool";
        carro3.matricula = "FR-42-GT";
        carro3.ano = 2004;
        carro3.proprietario = "Familia";

    carros carro4;
        carro4.marca = "Dacia";
        carro4.modelo = "Duster";
        carro4.versao = "Nigga";
        carro4.matricula = "69-42-NI";
        carro4.ano = 2019;
        carro4.proprietario = "Adolf";

    mediaAno = (carro1.ano + carro2.ano + carro3.ano + carro4.ano) / 4;
    mediaIdade = ano - mediaAno;
    mediaAux = ano - mediaAno;
    decimal = mediaIdade-mediaAux;

    cout << mediaAno << endl;
    cout << mediaIdade << endl;
    cout << mediaAux << endl;
    cout << decimal << endl;
    dias = decimal * dias;
    diasaux = decimal * diasaux;
    decimalDias = diasaux - dias;
    cout << diasaux << endl;
    cout << decimalDias;
    cout << mediaMeses;


    return 0;
}
