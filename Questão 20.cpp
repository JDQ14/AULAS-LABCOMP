#include <iostream>
//20. Construa um programa que leia um n�mero inteiro digitado pelo usu�rio. Caso o n�mero perten�a ao intervalo de 1 a 5, exiba o n�mero por
//extenso.Caso o n�mero n�o perten�a a este intervalo, exiba a mensagem "valor invalido".


using namespace std;
int main(void)
{
	int numero;
	cout << "========== Questao 18 ==========\n";
	cout << endl;
	cout << "Digite um numero: ";
	cin >> numero;
	if ((numero > 5) || (numero < 1))
	{
		cout << "Valor invalido.\n";
	}
	else
	{
		if (numero == 1)
		{
			cout << "Um.\n";
		}
		if (numero == 2)
		{
			cout << "Dois.\n";
		}
		if (numero == 3)
		{
			cout << "Tres.\n";
		}
		if (numero == 4)
		{
			cout << "Quatro.\n";
		}
		if (numero == 5)
		{
			cout << "Cinco.\n";
		}
	}
	
	return 0;
}