#include <iostream>
//17. Distinguir, com base na média parcial do aluno, se ele está aprovado, reprovado ou na final. Aplique as regras da UFERSA.

using namespace std;
int main(void)
{
	float media;
	cout << "========== Questao 17 ==========\n";
	cout << endl;
	cout << "Insira a sua media parcial para saber a sua situacao atual na disciplina: ";
	cin >> media;
	if (media < 7)
	{
		cout << "...\n";
		cout << "Voce esta reprovado.\n";
	}
	else
	{
		cout << "...\n";
		cout << "Voce esta aprovado.\n";
	}
	return 0;
}