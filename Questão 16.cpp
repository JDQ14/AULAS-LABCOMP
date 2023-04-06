#include <iostream>

//16. Construa um programa que simule uma transferência bancária, entre duas contas. Primeiro, inicialize cada conta com R$ 100. Depois, permita
//que o usuário defina quanto deve transferir, da conta1 para a conta2, porém a transferência só deve ser realizada caso haja saldo suficiente.
using namespace std;

int main(void)
{
    cout << "========== Questao 16 ==========\n";
    cout << endl;
    float saldo = 100, transferencia;
    int escolha, escolha2;

    cout << "Bem vindx a sua conta, o que gostaria de fazer?\n";
    cout << "1- Transferir\n";
    cout << "2- Sair\n";
    cout << ">";
    cin >> escolha;
    if (escolha == 2)
    {
        cout << "__________________________________________________________________________________________________\n";
        cout << "Ate mais!\n";
        return 0;
    }
    if (escolha == 1)
    {
        cout << "__________________________________________________________________________________________________\n";
        cout << "Seu saldo eh: " << saldo << endl;
        cout << "Quanto gostaria de transferir?\n";
        cout << ">";
        cin >> transferencia;
        if (transferencia > saldo)
        {
            cout << "__________________________________________________________________________________________________\n";
            cout << "Ocorreu um erro. O valor informado eh superior ao saldo. Tente novamente mais tarde.             \n";
            cout << "__________________________________________________________________________________________________\n";
            return 0;
        }
        else
        {
            cout << "Para quem gostaria de transferir?\n";
            cout << "1-Fulano\n";
            cout << "__________________________________________________________________________________________________\n";
            cout << ">";
            cin >> escolha2;
            if (escolha2==1)
            {
                cout << "__________________________________________________________________________________________________\n";
                cout << "Transferencia enviada com sucesso. O valor enviado foi: " << transferencia <<"R$.\n";
                return 0;
            }
            else 
            {
                cout << "__________________________________________________________________________________________________\n";
                cout << "Ocorreu um erro! Tente novamente mais tarde.\n";
                return 0;
            }
        }
    }
    else
    {
        cout << "__________________________________________________________________________________________________\n";
        cout << "Ocorreu um erro! Tente novamente mais tarde.\n";
        return 0;
    
    }
    return 0;
}
