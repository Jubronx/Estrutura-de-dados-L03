#include "Teste.h"
int main() {
	cout << "+++++++++++++++++++++++++++\n";
	cout << "Programa de Teste de Listas\n";
	cout << "+++++++++++++++++++++++++++\n";
	Lista lst;
	int n, opcao, total, posicao, soma;
	while ((opcao = menu()) != SAIR)
	{
		switch (opcao)
		{
		case IMPRIMIR:
			lst.imprime();
			cout << endl;
			break;

		case INSERIR:
			cout << "n? ";
			cin >> n;
			lst.insere(n);
			break;

		case APAGAR:
			cout << "n? ";
			cin >> n;
			lst.remove(n);
			break;

		case PROCURAR:
			cout << "n? ";
			cin >> n;
			if (lst.existe(n))
				cout << "O elemento estah na lista!\n";
			else
				cout << "Este elemento nao estah na lista...\n";
			break;

		case SOMA:
			soma = lst.soma();
			cout << "A lista possui " << soma << " elementos\n";
			break;

		case TOTAL:
			cout << "Digite o elemento:\n ";
			cin >> n;
			lst.total(n);
			cout << "O elemento aparece " << lst.total(n) << " vezes na lista\n";
			break;
		case POSICAO:
			cout << "Digite o elemento: \n ";
			cin  >> n;
			cout << "a posicao do elemento: " << n << " Eh " << lst.posicao(n) << "\n";
		case SAIR:
			break;

		default:
			cout << " Opcao Invalida! \n";

		} //fim do switch
	} //fim do while
} //fim do main
int menu()
{
	int opcao;
	cout << IMPRIMIR << " -Imprime itens da lista\n";
	cout << INSERIR << " -Inserir elemento na lista\n";
	cout << APAGAR << " -Apagar elemento da lista\n";
	cout << PROCURAR << " -Procurar elemento na lista\n";
	cout << SOMA << " -Total de elementos na lista\n";
	cout << TOTAL << " -Repeticao de um elemento\n";
	cout << POSICAO << "-Mostra a posicao do elemento\n";
	cout << SAIR << " -Encerrar o programa\n";
	

	cout << "Opcao ? "; cin >> opcao; return opcao;
}

