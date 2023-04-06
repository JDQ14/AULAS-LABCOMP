#include <iostream>

//8. Construa um programa que receba sua idade e a converta para: meses, semanas, dias, horas, dias, minutos, segundos e milissegundos.

using namespace std;
int main(void)
{
    cout << "========== Questao 8 ==========\n";
    cout << endl;
    int x;
    cout << "Digite sua idade: \n";
    cin >> x;
    cout << "Voce viveu aproximadamente: \n";
    cout << x * 12 << " meses. \n";
    cout << (x * 12) * 4 << " semanas.\n";
    cout << (((x * 12) * 4) * 7) << " dias. \n";
    cout << ((((x * 12) * 4) * 7) * 24) << " horas. \n";
    cout << (((((x * 12) * 4) * 7) * 24) * 60) << " minutos. \n";
    cout << ((((((x * 12) * 4) * 7) * 24) * 60) * 1000) << " milissegundos. \n";

    return 0;
}