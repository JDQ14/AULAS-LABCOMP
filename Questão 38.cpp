#include <iostream>
#include <string>
#include <map>
//38. Construa um programa que conte a quantidades de letras de uma palavra.
//Exemplo: “casa” Resultado : c = 1 a = 2 s = 1

using namespace std;

int main(void) {
    string palavra;
    map<char, int> contLetras;
    cout << "========== Questao 38 ==========\n\n";
    cout << "Insira uma palavra para iniciar: ";
    cin >> palavra;

    for (char letra : palavra) {
        contLetras[letra]++;
    }

    for (pair<char, int> cont : contLetras) {
        cout << cont.first << " = " << cont.second << endl;
    }
    return 0;
}


