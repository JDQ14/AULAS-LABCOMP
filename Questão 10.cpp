#include <iostream>

//10. Construa um programa para calcular o IMC de uma pessoa. 

using namespace std;

int main(void)
{
    float alt, peso, res;
    res = 0;
    cout << "========== Questao 10 ==========\n";
    cout << endl;
    cout << "Digite sua altura em metros: \n";
    cin >> alt;
    cout << "Digite sua massa corporal em quilos: \n";
    cin >> peso;
    res = peso / (alt * alt);
    cout << "Seu índice de massa corporal (IMC) é:" << res;

    return 0;
}