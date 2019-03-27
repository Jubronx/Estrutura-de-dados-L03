#include "Lista.h"
//Construtor
Lista::Lista()
{
	primeiro = NULL;
}


//M�todos de Acesso
No* Lista::getPrimeiro()
{
	return primeiro;
}


void Lista::setPrimeiro(No* novoNo)
{
	primeiro = novoNo;
}


//M�todos
bool Lista::eVazia()
{
	if (primeiro == NULL)
		return true;
	return false;
}

void Lista::insere(int elem)
{
	No *segundo = primeiro; //armazena segundo n� da nova lista
	primeiro = new No(elem); //o primeiro elemento da lista passa a ser o novo n�;
	primeiro->setProximo(segundo);//o proximo n� da lista � aquele
								  // armazenado anteriormente
}

void Lista::imprime()
{
	if (eVazia())
		cout << "{ }";
	else
	{
		No* pAux = primeiro;
		cout << "{";
		while (true)
		{
			cout << pAux->getInfo();//impress�o do n� atual
			if (pAux->getProximo() != NULL)//Se ainda existem n�s...
			{
				cout << ", ";
				pAux = pAux->getProximo(); //passa-se ao pr�ximo n�
			}
			else
			{ //fim da lista
				cout << "}";
				break;
			}
		}
	}
}

bool Lista::existe(int elem)
{
	if (eVazia())
		return false;
	No* pAux = primeiro;
	while (pAux != NULL)
	{
		if (pAux->getInfo() == elem)//elemento encontrado!
			return true;
		else
			pAux = pAux->getProximo(); //passa-se ao pr�ximo n�
	}
	return false; //nenhum n� com valor "elem" foi encontrado
}

No* Lista::remove(int elem)
{
	if (eVazia())
		return NULL;//o metodo retorna um ponteiro para No...
					//Quando o elem � o primeiro da lista...
	while (primeiro->getInfo() == elem)
	{
		No* aux = primeiro;//armazena o primeiro a ser removido.
		primeiro = primeiro->getProximo(); //passa-se ao pr�ximo n�,
										   //que agora � o primeiro.
		aux->~No(); //destrui��o do n� removido
		delete aux; //destrui��o do n� removido de forma mais limpa
		if (primeiro == NULL) //se for encontrado fim de lista....
			return primeiro;
	}
	//O primeiro n�o � mais um elemento a ser removido...
	Lista *pAux = new Lista(); //Cria lista auxiliar...
	pAux->primeiro = primeiro->getProximo();//... que se inicia no
											//proximo elemento da lista atual
	primeiro->setProximo(pAux->remove(elem)); //remove elem da nova lista,
											  // associando seu in�cio � lista atual
	return primeiro;
}


int Lista::soma() //Total de elementos na lista
{
	No* pAux = primeiro;
	int contador = 0;

	while (pAux != NULL)
	{
		contador++;
		pAux = pAux->getProximo();
	}
	return contador;
}


int Lista::total(int n) //Conta o numero de vezes que um elemento aparece na lista 
{
	No* pAux = primeiro;
	int contador = 0;

	while (pAux != NULL)
	{
		if (n == pAux->getInfo())
			contador++;

		pAux = pAux->getProximo();
	}
	return contador;
}

int Lista::posicao(int n)
{
	No* pAux = primeiro; // exibe a posi��o de um item na lista 
	int contador = 1;
	while (n != pAux->getInfo())
	{
		contador++;
		pAux = pAux->getProximo();
	}
	return contador;
}


//Destrutor
Lista::~Lista()
{//A lista deve ser destru�da n� por n�.
	No* pAux;
	while (primeiro != NULL)
	{
		pAux = primeiro;
		primeiro = primeiro->getProximo();
		pAux->~No();
	}
}
