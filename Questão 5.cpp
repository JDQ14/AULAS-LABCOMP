#include <iostream>

//5. Calcular e exibir a m�dia aritm�tica de tr�s n�meros inteiros.

using namespace std;
int main(void)
{
    cout << "========== Questao 5 ==========\n";
    cout << endl;

    int x, y, z;
    cout << "Digite o primeiro n�mero: \n";
    cin >> x;
    cout << "Digite o segundo n�mero: \n";
    cin >> y;
    cout << "Digite o terceiro n�mero: \n";
    cin >> z;
    cout << endl;
    cout << "---------------------------------\n";
    cout << "A media desses numeros eh: " << (x + y + z) / 3;
    cout << endl;

    return 0;
}