/**
 * Trabalho Lista Duplamente encadeada
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: afdsilva@inf.ufpel.edu.br
 * e-mail: mrdfsaldanha@inf.ufpel.edu.br
 **/

template <class T>
Nodo<T>::Nodo() {								//construtor sem parametros
	setProximo(NULL);
	setAnterior(NULL);
}

template <class T>
Nodo<T>::Nodo(T valor, Nodo * aNodo, Nodo * pNodo) {	//construtor passando valor, ponteiro anterior e proximo como parametro
	setValor(valor);
	setProximo(pNodo);
	setAnterior(aNodo);
}

template <class T>
Nodo<T>::Nodo(const Nodo &p) {							//construtor por copia
	Nodo<T> * nNodo = new Nodo<T>(p.getValor, p.getAnterior(), p.getProximo());
}

template <class T>
void Nodo<T>::setValor(T valor) {						//seta um valor
	this->valor = valor;
}

template <class T>
void Nodo<T>::setAnterior(Nodo * aNodo){				//seta um nodo para o nodo anterior
	this->aNodo = aNodo;
}

template <class T>	
void Nodo<T>::setProximo(Nodo * pNodo){					//seta um nodo para o nodo proximo
	this->pNodo = pNodo;
}

template <class T>
T Nodo<T>::getValor() {									//metodo para acessar o valor
	T valor;
	if (this->valor) valor = this->valor;
	return valor;
}

template <class T>
Nodo<T> * Nodo<T>::getProximo() {						//metodo para acessar o proximo
	return this->pNodo;
}
template <class T>
Nodo<T> * Nodo<T>::getAnterior() {						//metodo para acessar o anterior
	return this->aNodo;
}
