#pragma once
#include"Coleccion.h"

class ColArreglo : public Coleccion {
private:
		ObjetoBase* * vec;
		int can; //Elementos validos en el vector
		int tam; // tamano del vector 
public:
	ColArreglo(int);
	virtual ~ColArreglo();
	virtual void agregar(ObjetoBase*);
	virtual ObjetoBase* obtener(int) const ;// M.V
	virtual int maxElementos() const ;// M.V
	virtual int numElementos() const; //METODOS VIRTUALES
	virtual bool vacia() const;
	virtual Iterador* obtenerIterador() const;
	virtual string toString() const;

	//Para la casa
	//ColArreglo(const ColArreglo&);
	//virtual ColArreglo& operator=(const ColArreglo&);
	//virtual ObjetoBase*& operator[] (int) const;
	//virtual ObjetoBase* eliminar(int = -1);
	//virtual ObjetoBase* eliminar(const ObjetoBase&);
};
