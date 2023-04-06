#include <iostream>

//12. Calcular uma divisão entre dois números reais. Produza um alerta em caso de divisão por zero

using namespace std;

int main(void)
{
    float x, y;
    cout << "========== Questao 12 ==========\n";
    cout << endl;
    cout << "Digite um numero real para realizar uma divisao: ";
    cin >> x;
    cout << endl;
    while (x == 0)
    {
        cout << "Por favor, insira um numero diferente de 0 e tente novamente.\n";
        cout << "________________________________________________________\n";
        cout << "Digite um numero real para realizar uma divisao: ";
        cin >> x;
        cout << endl;
    }
    cout << "Digite o segundo numero real para realizar a divisao: ";
    cin >> y;
    cout << endl;
    while (y == 0)
    {
        cout << "Por favor, insira um numero diferente de 0 e tente novamente.\n";
        cout << "________________________________________________________\n";
        cout << "Digite o segundo numero real para realizar a divisao: ";
        cin >> y;
        cout << endl;
    }
    cout << "O resultado eh: " << x / y;

    return 0;
}