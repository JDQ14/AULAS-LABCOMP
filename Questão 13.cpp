#include <iostream>

//13. Calcular o IMC (�ndice de massa corporal) de uma pessoa. Produza um alerta em caso de divis�o por zero

using namespace std;

int main(void)
{
    cout << "========== Questao 13 ==========\n";
    cout << endl;
    float alt, peso, res;
    res = 0;
    cout << "Digite sua altura em metros: \n";
    cin >> alt;
    while (alt == 0)
    {
        cout << "Altura invalida, por favor, tente novamente. \n";
        cout << "___________________________________________________________\n";
        cout << "Digite sua altura em metros: \n";
        cin >> alt;
    }
    cout << "Digite sua massa corporal em quilos: \n";
    cin >> peso;
    while (peso == 0)
    {
        cout << "Massa corporal invalida, por favor, tente novamente. \n";
        cout << "___________________________________________________________\n";
        cout << "Digite sua massa corporal em quilos: \n";
        cin >> peso;
    }
    res = peso / (alt * alt);
    cout << "Seu �ndice de massa corporal (IMC) �: " << res;

    return 0;
}
