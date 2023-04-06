#include <iostream>
//24. Construa um programa para exibir a tabuada de qualquer número “n” (1 a 9), sendo “n” um número fornecido pelo usuário. Utilize estrutura de
//repetição.

using namespace std;
int main(void)
{
	cout << "========== Questao 24 ==========\n";
	cout << endl;
	float x;
	cout << "Digite o numero que deseja saber a tabuada (1 a 9): ";
	cin >> x;
	for (int i = 1; i <= 9; i++)
	{
		cout << x << "x" << i << "=" << x * i << endl;
	}
	return 0;
}
