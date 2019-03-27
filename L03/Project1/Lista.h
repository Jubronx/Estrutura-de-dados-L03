#include "No.h"
class Lista
{ //Defini��o de uma lista de inteiros: ponteiro para o primeiro n�.
	No* primeiro;
public:
	//Construtor
	Lista(); //cria lista vazia
			 //M�todos de Acesso
	No* getPrimeiro(); //retorna o primeiro n� da lista
	void setPrimeiro(No* novoNo); //torna "novoNo" o primeiro n� da lista
								  //M�todos
	
	int soma();
	int posicao(int elem);// retorna a posi��o do elemento
	int total(int elem);
	bool eVazia(); //retorna verdadeiro se a lista � uma lista vazia
	void insere(int elem); //insere elemento no in�cio da lista
	No* remove(int elem); //remove todas as ocorrencias de elem na lista
	bool existe(int elem); //verifica se elem existe na lista
	void imprime(); //imprime todos os elementos da lista
					//Destrutor
	~Lista(); //Destroi todos os n�s da lista
};