#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

//14. Construa um programa que calcule a área de um círculo, tendo como entrada o valor do raio, que deve ser positivo. Use o valor da constante PI
//vindo da biblioteca matemática.


using namespace std;

int main(void)
{
    cout << "========== Questao 14 ==========\n";
    cout << endl;
    float Raio;
    cout << "Digite o valor do raio do circulo: ";
    cin >> Raio;
    cout << endl;
    cout << "A area do circulo eh: " << M_PI * (Raio * Raio);

    return 0;
}
