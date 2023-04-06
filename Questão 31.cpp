#include <iostream>
//31. Construa um programa pra ler e exibir uma matriz de inteiros
using namespace std;
int main(void)
{
	cout << "========== Questão 31 ==========\n\n";
	int linha1[3] = { 1,2,3 }, linha2[3] = { 4,5,6 }, linha3[3]{ 7,8,9 };

	for (int i = 0; i < 3; i++) {
		cout << linha1[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << linha2[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << linha3[i]<<" ";
	}
	cout << endl;
	return 0;
}