   #include <iostream>

    using namespace std;

    /** função de inicialização do programa **/
    int main() {

        char op;
        float res, num1, num2;

        cout << "Escolha uma operacao \nS- Somar \nR - Retirar \nM - Multiplicar \nD - Dividir \n";
        cin >> op;
        cout << "\n 1º numero?";
        cin >> num1;
        cout << "\n 2º numero?";
        cin >> num2;

        if (op == 'S') {
            (res = num1+num2);
        } else if (op == 'R') {
            (res = num1-num2);
        } else if (op == 'M') {
            (res = num1*num2);
        } else if (op == 'D') {
            (res = num1/num2);
        }

        cout << res;
    return 0;

}
