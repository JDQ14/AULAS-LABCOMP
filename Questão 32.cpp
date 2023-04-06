#include <iostream>
//32. Construa e use uma função que produz um novo vetor de inteiros com a ordem inversa do vetor original passado por parâmetro.
using namespace std;
int main(void)
{
	cout << "========== Questao 32 ==========\n\n";
	int vet[3] = { 97,98,96};

	for (int i = 2; i >=0 ; i--) {
		cout << vet[i] << endl;
	}
	return 0;
}