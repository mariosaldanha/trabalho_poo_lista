/**
 * Trabalho Pilha
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: afdsilva@inf.ufpel.edu.br
 * e-mail: mrdfsaldanha@inf.ufpel.edu.br
 **/


#ifndef PILHA_H
#define PILHA_H

#include "lista.h"

using namespace std;

template <class P> 
class Pilha : public Lista <P> {

public:
	Pilha();
	Pilha(P valor);
	Pilha(Nodo<P> * nNodo);
	Pilha(const Lista<P> &p);

	void Push (Nodo <P> * nNodo);
	void Push(P valor);
	Nodo<P> * Pop();
	~Pilha();
};

#endif

#include "pilha.tpp"
