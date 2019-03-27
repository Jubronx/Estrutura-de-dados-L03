//Defini��o do n� para uma lista encadeada de inteiros
#include <iostream>
using namespace std;
class No
{
	int info;//a informa��o armazenada pelo n� � um inteiro
	No* proximo; //Ponteiro para o proximo n�
public:
	//Construtor
	No(int elem); //cria um n� com o valor dado por elem.
				  //M�todos de Acesso
	int getInfo(); //l� o valor de info do n�
	void setInfo(int novoInfo); //modifica o valor do n�
	No* getProximo(); //retorna o proximo n�
	void setProximo(No *novoNo); //modifica o valor do proximo n� novoNo
								 //Destrutor
	~No(); //Destroi o n�.
};