#include <iostream>

//5. Calcular e exibir a média aritmética de três números inteiros.

using namespace std;
int main(void)
{
    cout << "========== Questao 5 ==========\n";
    cout << endl;

    int x, y, z;
    cout << "Digite o primeiro número: \n";
    cin >> x;
    cout << "Digite o segundo número: \n";
    cin >> y;
    cout << "Digite o terceiro número: \n";
    cin >> z;
    cout << endl;
    cout << "---------------------------------\n";
    cout << "A media desses numeros eh: " << (x + y + z) / 3;
    cout << endl;

    return 0;
}