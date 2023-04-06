#include <iostream>
//22. Construa um programa que leia do usuário um número inicial e um número final. Em seguida, exiba na tela uma sequencia apenas com os
//números ímpares dentro deste intervalo informado pelo usuário.Exemplo: caso o usuário entre com os números 4 e 10, o resultado seria : 5 7 9
//a) Construa este programa utilizando a estrutura while.
using namespace std;
int main(void)
{
	int x, y;
	cout << "========== Questao 22-A ==========\n";
	cout << endl;
	cout << "Digite o numero inicial para saber os numeros impares do invervalo: ";
	cin >> x;
	cout << "Digite o numero final: ";
	cin >> y;
	while (x < y)
	{
		x++;
		if (x%2 != 0)
		{
			cout << x << endl;
		}
	}
	return 0;
}
