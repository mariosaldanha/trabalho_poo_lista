/**
 * Trabalho Lista Duplamente Encadeada
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: 	afdsilva@inf.ufpel.edu.br
 * 			mrdfsaldanha@inf.ufpel.edu.br
 **/

#ifndef LISTA_H
#define LISTA_H


#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <iostream>
#include "nodo.h"

using namespace std;

template <class L> class Lista {
protected:
	Nodo<L> * inicio;
	Nodo<L> * fim;
	int tam;
	
public:
	Lista();
	Lista(L valor);
	Lista(Nodo<L> * nNodo);
	Lista(const Lista<L> &p);
	void Insert(Nodo<L> * nNodo);
	void Insert(L valor);
	void Delete(L valor);
	void Delete(Nodo<L> * pNodo);
	void Sort();
	void setTam(int tam);

	/** /
	virtual void Enqueue(Nodo<L> * nNodo) = 0;
	virtual void Enqueue(L valor) = 0;
	virtual Nodo<L> * Dequeue() = 0;
	virtual void Push(Nodo <L> * nNodo) = 0;
	virtual void Push(L valor) = 0;
	virtual Nodo<L> * Pop() = 0;
	/**/
	Nodo<L> * getValor(L valor);
	int getTam();
	void print();
	~Lista();
};

#include "lista.tpp"

#endif

