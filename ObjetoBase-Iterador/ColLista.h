#pragma once
#include"Coleccion.h"
#include"Iterador.h"
#include"Nodo.h"

class ColLista : public Coleccion {
private:
	int _n;			//Cantidad de elementos
	Nodo* _primero;  //ve al inicio
	Nodo* _ultimo;   //ve al ultimo
public:
	ColLista();
	virtual ~ColLista();
	virtual void agregar(ObjetoBase*);
	virtual ObjetoBase* obtener(int) const;// M.V 
	virtual int numElementos() const; //METODOS VIRTUALES
	virtual bool vacia() const;
	virtual Iterador* obtenerIterador() const;
	virtual string toString() const;
};
//PARA CASA(LOS MISMI DE COLECCION ARREGLO)