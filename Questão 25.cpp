#include <iostream>
//25. Construa um programa que identifique se um número é primo.

using namespace std;
int main(void)
{
	cout << "========== Questao 25 ==========\n";
	cout << endl;
    int x, num, res = 0;
    cout << "Digite o numero que deseja identificar se e primo: ";
    cin >> num;
    cout << "Carregando..." << endl;
    for (x = 1; x <= num; x++)
    if (num % x == 0)
    {
        res++;
    }
    if (res == 2)
    {
        cout << "O numero " << num << " eh primo!" << endl;
    }
    else
    {
        cout << "O numero " << num << " nao eh primo!" << endl;
    }
    return 0;
}
