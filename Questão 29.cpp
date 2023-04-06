#include<iostream>
//29. Construa um programa que simule uma calculadora. Disponibilize um menu de opções e simule a opção desejada, exibindo novamente o menu,
//té que o usuário escolha sair.Menu de opções :
//1 - potenciação Dica : utilize a função da biblioteca matemática.
//2 - raiz quadrada Dica : utilize a função da biblioteca matemática.
//3 - fatorial Dica : crie e utilize uma função com a solução da questão anterior.
//0 - sair
using namespace std;
int main(void)
{
	cout << "========== Questao 29 ==========\n\n";
    int aux, potIn, potFi, raQua, x = 0, y = 0, res = 0;
    cout << "               Bem vindx\n\n";
    cout << "Escolha uma opcao para dar continuidade: \n\n";
    cout << " 1- Potenciacao \n 2- Raiz quadrada \n 3- Fatorial \n 0- Sair \n";
    cin >> aux;
    if (aux == 1)
    {
        system("cls");
        cout << "- - - - - - - - P O T E N C I A C A O - - - - - - - - \n\n";
        cout << "Digite um numero: ";
        cin >> potIn;
        cout << "Digite o numero para elevar: ";
        cin >> potFi;
        cout << endl;
        cout << pow(potIn, potFi) << " eh o resultado.\n";
    }
    if (aux == 2)
    {
        system("cls");
        cout << "- - - - - - - - R A I Z  Q U A D R A D A - - - - - - - - \n\n";
        cout << "Digite o numero que deseja saber a raiz quadrada: ";
        cin >> raQua;
        cout << endl;
        cout << sqrt(raQua) << " eh o resultado.\n";
    }
    if (aux == 3)
    {
        system("cls");
        cout << "- - - - - - - - F A T O R I A L - - - - - - - - \n\n";
        cout << "Digite o numero: ";
        cin >> x;
        cout << endl;
        y = x;
        for (res = 1; x > 1; x--)
            res = res * x;
        cout << y << "! = " << res << endl;
    }
    if (aux == 0)
    {
        system("cls");
        cout << "Obrigado por usar o programa, ate mais!\n";
    }
	return 0;
}