#include <iostream>

//2. Inicialize variáveis adequadas para: sua idade, sua altura, primeira letra do seu nome, seu nome completo. Depois exiba os dados na tela

using namespace std;
int main(void)
{
    cout << "========== Questo 2 ==========\n";
    cout << endl;
    string idade, altura, letra, nome;
    idade = "22 anos\n";
    altura = "1.76m de altura \n";
    letra = "R \n";
    nome = "Rubens Ronald de Freitas Nolasco \n";

    cout << "Sua idade: " << idade << endl;
    cout << "Sua altura: " << altura << endl;
    cout << "Primeira letra do seu nome: " << letra << endl;
    cout << "Seu nome completo: " << nome << endl;


    return 0;
}