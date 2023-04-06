#include <iostream>
//18. Construa um programa que receba do usuário as médias de cada uma das três unidade. Calcule e exiba a média parcial, e sua situação:
//“aprovado” tem média maior ou igual a 7.0, “final” tem média menor que 7.0 e maior ou igual a 3.5, “reprovado” tem média menor que 3.5.
//Se a situação for a prova final, solicite do usuário a note da prova final, calcule e informe sua média final e sua situação final: “aprovado na final”
//tem média final maior ou igual a 5, 0, “reprovado na final” tem média final menor que 5, 0.


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