#include <iostream>
//22. Construa um programa que leia do usu�rio um n�mero inicial e um n�mero final. Em seguida, exiba na tela uma sequencia apenas com os
//n�meros �mpares dentro deste intervalo informado pelo usu�rio.Exemplo: caso o usu�rio entre com os n�meros 4 e 10, o resultado seria : 5 7 9
//b) Construa este programa utilizando a estrutura do-while
using namespace std;
int main(void)
{
	int x, y;
	cout << "========== Questao 22-B ==========\n";
	cout << endl;
	cout << "Digite o numero inicial para saber os numeros impares do invervalo: ";
	cin >> x;
	cout << "Digite o numero final: ";
	cin >> y;
	do
	{
		x++;
		if (x % 2 != 0)
		{
			cout << x << endl;
		}
	} 
	while (x < y);
	return 0;
}
