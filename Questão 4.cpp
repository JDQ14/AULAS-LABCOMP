#include <iostream>

//4. Receba do teclado dois n�meros inteiros, calcule e exiba os resultados das seguintes opera��es: adi��o, subtra��o, multiplica��o, quociente da
//   divis�o e o resto da divis�o.

using namespace std;
int main(void)
{
    cout << "========== Questao 4 ==========\n";
    cout << endl;

    int x, y;
    cout << "Digite o primeiro n�mero: \n";
    cin >> x;
    cout << "Digite o segundo n�mero: \n";
    cin >> y;
    cout << endl;
    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    cout << x << "x" << y << "=" << x * y << endl;
    cout << x << "/" << y << "=" << x / y << endl;
    cout << "O resto da divis�o de " << x << " e " << y << " � " << x % y << endl;



    return 0;
}