#include <iostream>

//3. Atribua com valores vindos do teclado variáveis adequadas para: sua idade, sua altura, primeira letra do seu nome, seu nome completo.
//   Depois exiba os dados na tela.

using namespace std;
int main(void)
{
    int idade;
    string altura, letra, nome;
    cout << "Insira sua idade: \n";
    cin >> idade;
    cout << "Insura sua altura: \n";
    cin >> altura;
    cout << "Insira a primeira letra do seu nome: \n";
    cin >> letra;
    cout << "Insira o seu nome completo: \n";
    cin >> nome;
    cout << "---------------------------------------- \n";

    cout << "Sua idade: " << idade << endl;
    cout << "Sua altura: " << altura << endl;
    cout << "Primeira letra do seu nome: " << letra << endl;
    cout << "Seu nome completo: " << nome << endl;


    return 0;
}