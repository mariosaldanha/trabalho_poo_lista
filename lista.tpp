/**
 * Trabalho Lista Duplamente encadeada
 * André Felipe da Silva
 * Mário Saldanha
 * Matricula: 11107587
 * Matricula: 11108245
 * e-mail: afdsilva@inf.ufpel.edu.br
 * e-mail: mrdfsaldanha@inf.ufpel.edu.br
 **/

template <class L>
Lista<L>::Lista() {				//construtor sem parametros
	inicio = NULL;
	fim = NULL;
	setTam(0);
}

template <class L>
Lista<L>::Lista(Nodo<L> * aNodo) {		//construtor passando um nodo como parametro
	inicio = fim = aNodo;
	setTam(1);
}

template <class L>
Lista<L>::Lista(L valor) {				//construtor passando um valor para inserir
	Nodo<L> * aNodo = new Nodo<L>(valor);
	inicio = fim = aNodo;
	setTam(1);
}

template <class L>
Lista<L>::Lista(const Lista<L> &p){		//construtor por cópia
	Nodo <L> * cNodo = p.inicio;
	setTam(0);
	while(cNodo){
		Insert(cNodo->getValor());
		cNodo = cNodo->getProximo();
	}
}

template <class L>
void Lista<L>::Insert(L valor) {						
	Nodo<L> * cNodo = new Nodo<L>(valor,NULL, NULL);		//cria um nodo
	if(inicio == NULL){										//testa se a lista ta vazia
		inicio = fim = cNodo;								//se tiver inicio e fim apontam para o mesmo nodo
	}
	else{													//senão
		cNodo->setAnterior(fim);							//o ultimo atual aponta para o que era o ultimo
		fim->setProximo(cNodo);								//e o valor que era ultimo aponta para o novo nodo do fim
		fim = cNodo;										//fim aponta para o novo nodo
	}
	setTam(getTam()+1);										//incrementa o tamanho
}

template <class L>
void Lista<L>::Insert(Nodo<L> * cNodo) {
	//copia o nodo
	Nodo<L> * nNodo = new Nodo<L>(cNodo->getValor(),NULL,NULL);
	if(inicio == NULL){					//testa se a lista ta vazia
		inicio = fim = cNodo;			//se tiver inicio e fim apontam para o mesmo nodo
	}			
	else{								//senão
		cNodo->setAnterior(fim);		//o ultimo atual aponta para o que era o ultimo
		fim->setProximo(nNodo);			//e o valor que era ultimo aponta para o novo nodo do fim
		fim = cNodo;					//fim aponta para o novo nodo
	}
	setTam(getTam()+1);					//incrementa o tamanho
}

template <class L>
void Lista<L>::Delete(L valor){
	Nodo<L> * tNodo = getValor(valor);				//busca o nodo que contem o valor passado como parametro

	if(tNodo){
		if(inicio != fim){								//verifica se existe mais de um nodo
			if(tNodo == inicio){						//deleta no inicio
				inicio = tNodo->getProximo();
				tNodo->getProximo()->setAnterior(NULL);
			}
			else if(tNodo == fim){						//deleta no fim
				fim = tNodo->getAnterior();
				tNodo->getAnterior()->setProximo(NULL);
			}
			else{										//deleta no meio
				tNodo->getAnterior()->setProximo(tNodo->getProximo());
				tNodo->getProximo()->setAnterior(tNodo->getAnterior());
			}
			tNodo->setAnterior(NULL);
			tNodo->setProximo(NULL);
		}
		setTam(getTam()-1);									//decrementa o tamanho
	}
	else{
		inicio = NULL;
		fim = NULL;
	}
  /**/
}

template <class L>
void Lista<L>::Delete(Nodo<L> * pNodo){

	if(pNodo){
		if(inicio != fim){							//verifica se existe mais de um nodo
			if(pNodo == inicio){					//deleta no inicio
				inicio = pNodo->getProximo();
				pNodo->getProximo()->setAnterior(NULL);
			}
			else if(pNodo == fim){					//deleta no fim
				fim = pNodo->getAnterior();
				pNodo->getAnterior()->setProximo(NULL);
			}
			else{									//deleta no meio
				pNodo->getAnterior()->setProximo(pNodo->getProximo());
				pNodo->getProximo()->setAnterior(pNodo->getAnterior());
			}
			pNodo->setAnterior(NULL);
			pNodo->setProximo(NULL);
		}
		setTam(getTam()-1);							//decrementa o tamanho
	}
	else{
		inicio = NULL;
		fim = NULL;
	}
/**/
}

template <class L>
void Lista<L>::Sort(){									//método de ordenação
	Nodo<L> * tNodo, *cNodo;
	L temp;
	
	for(tNodo = inicio; tNodo; tNodo = tNodo->getProximo()){		//percorre toda lista
		for(cNodo = tNodo; cNodo; cNodo = cNodo->getProximo()){		//percorre apartir do tNodo
			if(tNodo->getValor() > cNodo->getValor()){				//verifica esta desordenado
				temp = cNodo->getValor();							//se estiver, ordena
				cNodo->setValor(tNodo->getValor());					//trocando de posição, usando temp como auxiliar
				tNodo->setValor(temp);
			}
		}
	}
}

template <class L>
void Lista<L>::setTam(int tam) {
	this->tam = tam;
}

template <class L>
Nodo<L> * Lista<L>::getValor(L valor) {					//busca um nodo passando um valor como parametro
	Nodo<L> * tNodo;
	tNodo = inicio;
	
	while(tNodo){										//enquanto o nodo nao for nulo
		if(tNodo->getValor() == valor){					//verifica se é o valor procurado
			return tNodo;								//se for retorna o nodo
		}
		tNodo = tNodo->getProximo();					//senao passa para o proximo
	}
	 return NULL;										//senao achar retorna nulo
}

template <class L>
int Lista<L>::getTam(){
	return this->tam;
}

template <class L>
void Lista<L>::print(){					//printa a lista
	Nodo<L> * tNodo;
	tNodo = inicio;							
			
	while(tNodo){								//enquanto nodo nao for nulo
		cout << tNodo->getValor() << " ";		//imprimi a lista
		tNodo = tNodo->getProximo();			//passa para o proximo
	}
	cout << endl;
}

template <class L>
Lista<L>::~Lista() {					//destrutor
	Nodo<L> * tNodo, *cNodo;
	tNodo = inicio;
	
	while(tNodo){						//enquanto nodo diferente de nulo
		cNodo = tNodo->getProximo();	//auxiliar para pegar o proximo
		delete(tNodo);					//deleta o nodo
		tNodo = cNodo;					//recebe o proximo para deletar
	}
	
	delete(inicio);
	delete(fim);
}
/**/
