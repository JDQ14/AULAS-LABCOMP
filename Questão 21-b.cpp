#include <iostream>
//21. Construa um programa que leia do usu�rio um n�mero inicial e um n�mero final. Em seguida, exiba na tela uma sequencia com os n�meros desse
//intervalo informado pelo usu�rio.Exemplo: caso o usu�rio entre com os n�meros 4 e 10, o resultado do programa seria : 4 5 6 7 8 9 10
//b) Construa este programa utilizando a estrutura do-while.
using namespace std;
int main(void)
{
	int x, y;
	cout << "========== Questao 21-A ==========\n";
	cout << endl;
	cout << "Digite o numero inicial para exibir o intervalo: ";
	cin >> x;
	cout << "Digite o numero final para finalizar o intervalo: ";
	cin >> y;
	do
	{
		cout << x << endl;
		x++;
	} while (x <= y);

	return 0;
}
