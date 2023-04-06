#include<iostream>
//35. Construa um programa que ordene (em ordem crescente) e exiba na tela os números de um vetor que tenha sido inicializado com números
//inteiros desordenados.

using namespace std;
int main(void) {
	cout << "========== Questao 34 ==========\n\n";
	int size=0;
		int* vet = new int[size];
		int aux;

	cout << "Digite o tamanho do vetor: ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "Digite o " << i+1 << " numero: ";
		cin >> vet[i];
		for (int j = i + 1; j < size; j++) {
			if (vet[i] > vet[j]) {
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << vet[i] << endl;
	}

	return 0;
}