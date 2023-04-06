#include <iostream>
#include <string>
#include <map>
//39.Construa um programa que conte a quantidades de vezes que as palavras de uma frase aparecem.
//Exemplo: “estude muito sempre sempre estude” Resultado : estude = 2 muito = 1 sempre = 2

using namespace std;

int main(void) {
    string frase;
    map<string, int> contPalavras;
    int inicio = 0, fim;
    cout << "========== Questao 39 ==========\n\n";
    cout << "Insira uma frase: ";

    getline(cin, frase);

    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == ' ') {
            fim = i - 1;
            string palavra = frase.substr(inicio, fim - inicio + 1);
            contPalavras[palavra]++;
            inicio = i + 1;
        }
    }
    string palavra = frase.substr(inicio, frase.size() - 1);
    contPalavras[palavra]++;

    for (const auto& cont : contPalavras) {
        cout << cont.first << " = " << cont.second << endl;
    }

    return 0;
}