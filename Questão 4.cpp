#include <iostream>

//4. Receba do teclado dois números inteiros, calcule e exiba os resultados das seguintes operações: adição, subtração, multiplicação, quociente da
//   divisão e o resto da divisão.

using namespace std;
int main(void)
{
    cout << "========== Questao 4 ==========\n";
    cout << endl;

    int x, y;
    cout << "Digite o primeiro número: \n";
    cin >> x;
    cout << "Digite o segundo número: \n";
    cin >> y;
    cout << endl;
    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    cout << x << "x" << y << "=" << x * y << endl;
    cout << x << "/" << y << "=" << x / y << endl;
    cout << "O resto da divisão de " << x << " e " << y << " é " << x % y << endl;



    return 0;
}