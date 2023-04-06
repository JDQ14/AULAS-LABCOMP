#include <iostream>

//6. Calcular e exibir a média aritmética de três números reais.

using namespace std;
int main(void)
{
    cout << "========== Questao 6 ==========\n";
    cout << endl;

    float x, y, z;
    cout << "Digite o primeiro número: \n";
    cin >> x;
    cout << "Digite o segundo número: \n";
    cin >> y;
    cout << "Digite o terceiro número \n";
    cin >> z;
    cout << "---------------------------------\n";
    cout << "A media dos numeros eh: " << (x + y + z) / 3;

    return 0;
}