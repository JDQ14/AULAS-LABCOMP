#include<iostream>
//34. Construa um programa que mova o número da última posição de um vetor para a primeira posição. Faça isso gradativamente: use uma estrutura
//de repetição, e em cada iteração do loop mova esse número apenas uma posição, ou seja, troque esse número da posição n por n - 1
using namespace std;
int main(void) {
	cout << "========== Questao 34 ==========\n\n";
	int size = 0;
	int n = 0;
	int* vet = new int[size];
	cout << "Digite o tamanho do vetor: ";
	cin >> size;
	n = size;
	for (int i = 0; i < size; i++,n--) {
		cout << "Digite o " << i + 1 << " numero: ";
		cin >> vet[n-1];
	}
	for (int i = 0; i < size; i++) {
		cout << vet[i] << endl;
	}
	return 0;
}