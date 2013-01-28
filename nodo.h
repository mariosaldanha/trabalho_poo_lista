/**
 * Trabalho Lista Duplamente encadeada
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: afdsilva@inf.ufpel.edu.br
 * e-mail: mrdfsaldanha@inf.ufpel.edu.br
 **/

#ifndef NODO_H
#define NODO_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

template <class T> class Nodo {
	T valor;
	Nodo * pNodo;
	Nodo * aNodo;
public:
	Nodo();
	Nodo(T valor, Nodo * aNodo = NULL, Nodo * pNodo = NULL);
	Nodo(const Nodo &n);
	void setValor(T valor);
	void setProximo(Nodo * pNodo);
	void setAnterior(Nodo * aNodo);
	T getValor();

	Nodo * getProximo();
	Nodo * getAnterior();
};

#endif

#include "nodo.tpp"
