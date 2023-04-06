#include <iostream>
//26. Construa um programa que calcule o rendimento mensal de um investimento em poupança. Variáveis: investimento inicial, investimento
//mensal, quantidade de meses, saldo acumulado, taxa de juros mensal, rendimento mensal.

using namespace std;
int main(void)
{
	cout << "========== Questao 26 ==========\n";
	cout << endl;
	float invIni, invMen, quanMe, salAcu, taxJur = 0.05 , opcao, renMen;
	
	cout << "Bem vindx ao banco >>Banquinho<<\n";
	cout << "O que gostaria de fazer?\n";
	cout << "1-Investir!\n2-Sair\n";
	cin >> opcao;
	if (opcao == 1) {
		system("cls");
		cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
		cout << "Voce tera um rendimento de 0.05% ao mes com o investimento!\n";
		cout << "Qual valor de entrada voce poderia dar?\n";
		cin >> invIni;
		system("cls");
		cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
		cout << "Valor de entrada: " << invIni << "R$" << endl;
		cout << "Qual valor mensal que voce poderia dar?\n";
		cin >> invMen;
		system("cls");
		cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
		cout << "Valor de entrada: " << invIni << "R$" << endl;
		cout << "Valor investido mensalmente: " << invMen << "R$" << endl;
		cout << "Insira a quantidade de meses que voce pode investir: ";
		cin >> quanMe;
		system("cls");
		cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
		cout << "Valor de entrada: " << invIni << "R$" << endl;
		cout << "Valor investido mensalmente: " << invMen << "R$" << endl;
		cout << "Com isso voce tera:\n\n";
		salAcu = invIni + invMen;

		for (int i = 1; i <= quanMe; i++)
		{
			renMen = salAcu * taxJur;
			salAcu = salAcu + renMen + invMen;
			cout << renMen << "R$ adicional no " << i << " mes." << endl;
		}
		cout << salAcu << "R$ no final.\n";
	}
	else
	{
		if (opcao==2)
		{
			system("cls");
			cout << "Ate mais!\n\n\n\n\n";
		}
		else
		{
			system("cls");
			cout << "Opcao invalida, tente novamente!\n\n\n\n\n";
		}
	}
	return 0;
}