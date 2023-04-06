#include <iostream>
#include<math.h>
//19. Construa um programa que calcule uma equação do 2º grau.
//Crie uma função com retorno para calcular o delta.
//Crie uma função sem retorno para calcular as raízes


using namespace std;
int main(void)
{
	float a, b, c, delta, raiz1, raiz2;
	cout << "========== Questao 18 ==========\n";
	cout << endl;	
	cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b;
	cout << "Digite o valor de c: ";
	cin >> c;
	if ((a == 0) || (b == 0) || (c == 0))
	{
		cout << "Nao eh possivel realizar o calculo, tente um numero diferente de 0.\n";
	}
	else
	{
		delta = (b * b) - (4 * a * c);
		if (delta < 0)
		{
			cout << "Nao possui raiz\n";
		}
		else
		{
			if (delta == 0)
			{
				raiz1 = (-b) / (2 * a);
				cout << "Este eh o resultado: " << raiz1 << endl;
			}
			else
			{
				raiz1 = (-b - sqrt(delta)) / (2 * a);
				raiz2 = (-b + sqrt(delta)) / (2 * a);
				cout << "Este eh o resultado:\nRaiz 1:" << raiz1 << endl << "Raiz 2:" << raiz2 << endl;
			}
		}
	}


	return 0;
}