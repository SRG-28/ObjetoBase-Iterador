#pragma once
#include"Iterador.h"
#include"Nodo.h"

class IterLista : public Iterador {
private:
	Nodo* _actual;
public:
	IterLista(Nodo*);
	virtual ~IterLista();
	virtual bool masElementos() const; //metodo virtual puro(M.V.P)
	virtual ObjetoBase* proximoElemento();
	virtual string toString() const;
};
