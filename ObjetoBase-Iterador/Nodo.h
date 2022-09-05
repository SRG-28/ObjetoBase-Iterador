#pragma once
#include"ObjetoBase.h"

class Nodo : public ObjetoBase {
private:
	ObjetoBase* _info; //Pasajero del nodo
	Nodo* _siguiente; //Puntero enlace

public:
	Nodo(ObjetoBase*, Nodo*);
	virtual ~Nodo();
	ObjetoBase* obtenerInfo() const;
	Nodo* obtenerSiguiente() const;
	void establecerSiguiente(Nodo*);
	void establecerInfo(ObjetoBase* info);
	string toString() const;
};
