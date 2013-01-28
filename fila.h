/**
 * Trabalho Fila
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: afdsilva@inf.ufpel.edu.br
 * e-mail: mrdfsaldanha@inf.ufpel.edu.br
 **/

#ifndef FILA_H
#define FILA_H

#include "lista.h"

using namespace std;

template <class F>
class Fila : public Lista<F> {
	
public:
	Fila();
	Fila(F valor);
	Fila(Nodo<F> * nNodo);
	Fila(const Lista<F> &p);

	void Enqueue(Nodo<F> * nNodo);
	void Enqueue(F valor);
	Nodo<F> * Dequeue();
	~Fila();
};

#endif

#include "fila.tpp"
