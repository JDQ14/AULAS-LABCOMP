#include <iostream>
//21. Construa um programa que leia do usu�rio um n�mero inicial e um n�mero final. Em seguida, exiba na tela uma sequencia com os n�meros desse
//intervalo informado pelo usu�rio.Exemplo: caso o usu�rio entre com os n�meros 4 e 10, o resultado do programa seria : 4 5 6 7 8 9 10
//c) Construa este programa utilizando a estrutura for.

using namespace std;
int main(void)
{
	int x,y;
	cout << "========== Questao 21-C ==========\n";
	cout << endl;
	cout << "Digite o numero inicial para exibir o intervalo: ";
	cin >> x;
	cout << "Digite o numero final para finalizar o intervalo: ";
	cin >> y;
	for (int res = x; res <= y; res++)
	{
		cout << res << endl;
	}

	return 0;
}
