#pragma once
#include"ObjetoBase.h"

class Iterador : public ObjetoBase { //<<abstract>>
public: 
	Iterador(){}
	virtual ~Iterador(){}
	virtual bool masElementos() const = 0; //metodo virtual puro(M.V.P)
	virtual ObjetoBase* proximoElemento() = 0;
	virtual string toString() const { return ""; }
};