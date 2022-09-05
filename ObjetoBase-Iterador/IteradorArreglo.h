#pragma once
#include"Iterador.h"

class IteradorArreglo : public Iterador {
private:
	int i;  //es el sub-indice que pasa de elemento a elemento
	int cant; //Num de elementos validos del contenedor
	ObjetoBase** vect; //visualiza el contenedor con el que trabajo

public:
	IteradorArreglo(int, ObjetoBase* []); //int de elementos validos
	virtual ~IteradorArreglo();
	virtual bool masElementos() const; //metodo virtual puro(M.V.P)
	virtual ObjetoBase* proximoElemento();
	virtual string toString();
};