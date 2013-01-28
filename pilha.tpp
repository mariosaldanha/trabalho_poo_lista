/**
 * Trabalho Pilha
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: afdsilva@inf.ufpel.edu.br
 * e-mail: mrdfsaldanha@inf.ufpel.edu.br
 **/

template <class P>
Pilha<P>::Pilha() : Lista<P>(){

}

template <class P>
Pilha<P>::Pilha(P valor) : Lista<P>(valor){

}
template <class P>

Pilha<P>::Pilha(Nodo<P> * nNodo) : Lista<P>(nNodo){
	
}

template <class P>
Pilha<P>::Pilha(const Lista<P> &p) : Lista<P>(*p){
	
}

template <class P>
void Pilha<P>::Push (Nodo <P> * nNodo){
	this->Insert(nNodo);	
}

template <class P>
void Pilha<P>::Push(P valor){
	this->Insert(valor);
}

template <class P>
Nodo<P> * Pilha<P>::Pop(){
	Nodo<P> * retorna = this->fim;
	this->Delete(this->fim);
	
	return retorna;
}

template <class P>
Pilha<P>::~Pilha(){
	delete(this->fim);
}

