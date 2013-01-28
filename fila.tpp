/**
 * Trabalho Fila
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: afdsilva@inf.ufpel.edu.br
 * e-mail: mrdfsaldanha@inf.ufpel.edu.br
 **/


template <class F>
Fila<F>::Fila() : Lista<F>() {				//construtor sem parametros
	
}
template <class F>
Fila<F>::Fila(F valor) : Lista<F>(valor) {

}
template <class F>
Fila<F>::Fila(Nodo<F> * nNodo) : Lista<F>(nNodo) {

}
template <class F>
Fila<F>::Fila(const Lista<F> &p) : Lista<F>(p) {

}

template <class F>
void Fila<F>::Enqueue(Nodo<F> * nNodo) {
	Lista<F>::Insert(nNodo);
}
template <class F>
void Fila<F>::Enqueue(F valor) {
	Lista<F>::Insert(valor);
}
template <class F>
Nodo<F> * Fila<F>::Dequeue() {
	Nodo<F> * retorna = this->inicio;
	Lista<F>::Delete(this->inicio);

	return retorna;
}
template <class F>
Fila<F>::~Fila(){
	Lista<F>::~Lista();
}
