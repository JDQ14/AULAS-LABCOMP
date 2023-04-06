#include <iostream>
//28. Construa um programa que calcule o fatorial de um número. Use uma estrutura de repetição. Fatorial: n! = n (n − 1)!
//Exemplo: 5!= 5 x 4 x 3 x 2 x 1 = 120 ou 5!= 1 x 2 x 3 x 4 x 5 = 120
using namespace std;
int main(void)
{
    int x = 0, res = 0, y = 0;
    cout << "========== Questao 27 ==========\n\n";
    cout << "Digite o numero para fatorar: ";
    cin >> x;
    y = x;
    for (res = 1; x > 1; x--)
    {
        res = res * x;
    }
    cout << y << "!=" << res << endl;
    return 0;
}