#include <iostream>
//27. Construa um programa que calcule o somatório dos números inteiros de um intervalo, definido por um número inicial e um número final.
//Exemplo: caso as entradas fossem 4 e 9, o resultado seria : 39
using namespace std;
int main(void)
{
	int x=0, y=0, total=0;
	cout << "========== Questao 27 ==========\n\n";
    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;
    cout << x << " ate o " << y;
    x++;
    cout << endl;
    for (int i = x; x < y; x++) {
        total += x;
        cout << "soma: " << total << endl;
    }
    cout << endl << "soma final: " << total << endl;
    return 0;
}