#include <iostream>
//23. Verificar se a senha, informada durante a execução, é correta. Quando a senha estiver correta, exiba “senha correta” e o programa é encerrado.
//Quando a senha estiver errada, exiba “senha incorreta”, e permita a entrada novamente da senha, repetindo esse processo até que a senha entrada
//seja correta.
// b) Resolva esse problema utilizando a estrutura do - while
using namespace std;
int main(void)
{
	int pular;
	string senha, pass;
	pass = "UFERSA";
	cout << "========== Questao 23-B ==========\n";
	cout << endl;
	cout << "Usuario: FelipinGamerPro2007\n";
	cout << "Senha: ";
	cin >> senha;
	do
	{
		cout << "Senha incorreta, digite qualquer tecla para tentar novamente\n";
		cin >> pular;
		system("cls");
		cout << "Usuario: FelipinGamerPro2007\n";
		cout << "Senha: ";
		cin >> senha;
	} while (senha != pass);
	system("cls");
	cout << "Bem vindx ao programa!\n";
	return 0;
}
