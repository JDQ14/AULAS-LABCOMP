#include<iostream>
//34. Construa um programa que mova o n�mero da �ltima posi��o de um vetor para a primeira posi��o. Fa�a isso gradativamente: use uma estrutura
//de repeti��o, e em cada itera��o do loop mova esse n�mero apenas uma posi��o, ou seja, troque esse n�mero da posi��o n por n - 1
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