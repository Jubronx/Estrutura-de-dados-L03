#include "No.h"
//Construtor
No::No(int elem)
{
	info = elem;
	proximo = NULL;
}
//M�todos de Acesso
int No::getInfo()
{
	return info;
}
void No::setInfo(int novoInfo)
{
	info = novoInfo;
}
No* No::getProximo()
{
	return proximo;
}
void No::setProximo(No *novoNo)
{
	proximo = novoNo;
}
//Destrutor
No::~No()
{ //Se esta msg n�o aparecer no final, a mem�ria alocada para o n� n�o foi liberada!
	cout << "Noh de valor " << info << " destruido!" << endl;
}