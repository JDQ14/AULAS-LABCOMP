#include <iostream>

//11. Construa um programa que gerencia a conta de uma pizzaria.
//Pre�o do refrigerante: R$ 1,50. Pre�o da fatia de pizza: R$ 3,00. Taxa do gar�om: 10%.
//Receba do usu�rio: a quantidade de refrigerantes, a quantidade de fatias e a quantidade de pessoas na mesa.
//Calcule e exiba: o total sem a taxa, o total com a taxa, o rateio por pessoa com a taxa.

using namespace std;

int main(void)
{
    float Refri, Pizza, garTaxa;
    Refri = 1, 50, Pizza = 3;

    int quanRefri, quanPizza, quanPessoas;
    garTaxa = 1.10;

    cout << "========== Questao 11 ==========\n";
    cout << endl;
    cout << "Quantos refrigerantes foram para a mesa?\n";
    cin >> quanRefri;
    cout << "...\n";
    cout << "Quantas fatias de pizza foram para a mesa?\n";
    cin >> quanPizza;
    cout << "...\n";
    cout << "Quantas pessoas estavam na mesa?\n";
    cin >> quanPessoas;
    cout << "...\n";
    cout << "O valor total deu: " << (Refri * quanRefri) + (Pizza * quanPizza) << " R$.\n";
    cout << "O valor total (com taxas) deu: " << ((Refri * quanRefri) + (Pizza * quanPizza) * garTaxa) << " R$.\n";
    cout << "O rateio por pessoa (com taxas) deu: " << ((Refri * quanRefri) + (Pizza * quanPizza) * garTaxa) / quanPessoas << " R$.\n";

    return 0;
}
