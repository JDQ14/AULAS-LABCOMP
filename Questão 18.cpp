#include <iostream>
//18. Construa um programa que receba do usu�rio as m�dias de cada uma das tr�s unidade. Calcule e exiba a m�dia parcial, e sua situa��o:
//�aprovado� tem m�dia maior ou igual a 7.0, �final� tem m�dia menor que 7.0 e maior ou igual a 3.5, �reprovado� tem m�dia menor que 3.5.
//Se a situa��o for a prova final, solicite do usu�rio a note da prova final, calcule e informe sua m�dia final e sua situa��o final: �aprovado na final�
//tem m�dia final maior ou igual a 5, 0, �reprovado na final� tem m�dia final menor que 5, 0.


using namespace std;
int main(void)
{
	float nota1, nota2, nota3, notafinal, provafinal;
		;
	cout << "========== Questao 18 ==========\n";
	cout << endl;
	cout << "Insira a nota da primeira unidade: ";
	cin >> nota1;
	cout << "Insira a nota ta segunda unidade: ";
	cin >> nota2;
	cout << "Insira a nota da terceira unidade: ";
	cin >> nota3;
	notafinal=(nota1 + nota2 + nota3) / 3;
	if(notafinal>=7)
	{
		cout << "Voce esta aprovado, parabens.\n";
	}
	else 
	{
		if ((notafinal < 7) && (notafinal >= 3.5))
		{
			cout << "Voce esta na prova final.\nInsira a sua nota: ";
			cin >> provafinal;
			notafinal = (nota1 + nota2 + nota3 + provafinal) / 4;
			if (notafinal >= 7)
			{
				cout << "Voce esta aprovado, parabens.\n";
			}
			else
			{
				cout << "Voce esta reprovado.\n";
			}
		}
		else
		{
			cout << "Voce esta reprovado.\n";
		}
	}
	
	return 0;
}