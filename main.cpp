/**
 * Trabalho Lista Duplamente encadeada - Pilha - Fila
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: afdsilva@inf.ufpel.edu.br
 * e-mail: mrdfsaldanha@inf.ufpel.edu.br
 **/

#include "fila.h"
#include "pilha.h"
#include <iostream>
#include <sys/time.h>
using namespace std;

int main(){

	int i;
	int numero;

	cout << "Criando Fila" << endl << endl;
	Fila <int>* mFila = new Fila<int>();
	cout << "Enfileirando dados: " << endl;
	srand(time(NULL));
	
	for (i=0; i<10;i++) {
		numero = rand() % 1000;
		cout << "Enfileirando: " << numero << endl;
		mFila->Enqueue(numero);
	}
	
	cout << "Listando dados na Fila" << endl;
	mFila->print();
	cout << "Acessando lista 5x:"  <<endl;
	for (i=0;i<5;i++)
		cout << "Acessando: " << mFila->Dequeue()->getValor() << endl;
	cout << "Listando dados na Fila" << endl;
	mFila->print();
	
	cout << endl << endl << endl << "Criando uma Lista, instanciada como Fila: " << endl << endl;

	Lista <int>* mLista = new Fila<int>();

	for (i=0; i<10;i++) {
		numero = rand() % 1000;
		cout << "Enfileirando: " << numero << endl;
		mFila->Enqueue(numero);
	}
	
	cout << "Listando dados na Fila" << endl;
	mFila->print();
	cout << "Acessando lista 5x:"  <<endl;
	for (i=0;i<5;i++)
		cout << "Acessando: " << mFila->Dequeue()->getValor() << endl;
	cout << "Listando dados na Fila" << endl;
	mFila->print();

	cout << "Criando Fila com parametro:" << endl;
	Fila <int>* aFila = new Fila<int>(2);
	cout << "Listando dados na Fila Criada: " << endl;
	aFila->print();

	cout << endl << "Construtor de Copia Fila: " << endl << endl;
	
	Fila <int>* nFila = new Fila<int>(*mFila);
	
	cout << "Listando dados na Fila Copiada: " << endl;
	nFila->print();
	
	cout << endl << "Criando Pilha: " << endl << endl;
	Pilha <int>* nPilha = new Pilha<int>();
	
	for (i=0; i<10;i++) {
		numero = rand() % 1000;
		cout << "Empilhando: " << numero << endl;
		nPilha->Push(numero);
	}
	cout << "Listando dados na Pilha" << endl;
	nPilha->print();
	cout << "Desempilhando 5x:"  <<endl;
	for (i=0;i<5;i++)
		cout << "Acessando: " << nPilha->Pop()->getValor() << endl;
	cout << "Listando dados na Pilha" << endl;
	nPilha->print();
	
	cout << endl << "Construtor de Copia Pilha: " << endl << endl;
	Pilha <int>* cPilha = new Pilha<int>(*nPilha);
	numero = rand() % 1000;
	cout << "Empilhando: " << numero << endl;
	cPilha->Push(numero);
	cout << "Listando dados na Pilha Copiada" << endl;
	cPilha->print();	
	cout << "Listando dados na Pilha Original" << endl;
	nPilha->print();

	return 0;
}
