#include <iostream>
//30. Construa um programa pra ler e exibir um vetor de inteiros.
using namespace std;
int main(void)
{
	cout << "========== Questao 30 ==========\n\n";
	int vet[4]={1,2,3,4};

	for (int i = 0; i < 4; i++) {
		cout << vet[i] << endl;
	}
	return 0;
}