#include <iostream>

//7. Construa um programa para exibir a tabuada de qualquer número n (1 a 9), sendo n um número fornecido pelo usuário

using namespace std;
int main(void)
{
    cout << "========== Questao 7 ==========\n";
    cout << endl;
    int x;
    cout << "Digite o primeiro numero inteiro para saber a tabuada: \n";
    cin >> x;
    for (int y=1; y<=9; y++)
    {
        cout << y << "x" << x << "=" << y*x << endl;
    }
    return 0;
}