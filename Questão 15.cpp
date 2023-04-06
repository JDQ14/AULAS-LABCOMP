#include <iostream>

//15. Construa um programa que leia um número inteiro e identifique se ele é par ou ímpar


using namespace std;

int main(void)
{
    cout << "========== Questao 15 ==========\n";
    cout << endl;
    int x;

    cout << "Digite o numero para saber se eh impar ou par: ";
    cin >> x;
    if (x % 2 != 0)
    {
        cout << "O numero eh impar!\n";
    }
    else
    {
        cout << "O numero eh par\n";
    }
    return 0;
}