#include <iostream>

//6. Calcular e exibir a m�dia aritm�tica de tr�s n�meros reais.

using namespace std;
int main(void)
{
    cout << "========== Questao 6 ==========\n";
    cout << endl;

    float x, y, z;
    cout << "Digite o primeiro n�mero: \n";
    cin >> x;
    cout << "Digite o segundo n�mero: \n";
    cin >> y;
    cout << "Digite o terceiro n�mero \n";
    cin >> z;
    cout << "---------------------------------\n";
    cout << "A media dos numeros eh: " << (x + y + z) / 3;

    return 0;
}