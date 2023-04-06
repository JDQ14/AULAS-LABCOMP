#include <iostream>
//33. Construa um programa que identifique o maior e o menor número de um vetor de inteiros
using namespace std;
int main(void)
{
	cout << "========== Questao 33 ==========\n\n";
	int size=0;
	int* vet=new int[size];
	cout << "Digite o tamanho do vetor: ";
	cin >> size;
	for (int i = 0; i < size; i++) {
			cout << "Digite o " << i+1 << " numero: ";
			cin >> vet[i];
	}
	int maior = vet[0];
	int menor = vet[0];
	for (int i = 0; i < size; i++) {
		if (maior<vet[i]) {
			maior = vet[i];
		}
		if (menor > vet[i]) {
			menor = vet[i];
		}
	}
	cout << maior << " eh o maior numero\n";
	cout << menor << " eh o menor numero\n";
	
	return 0;
}