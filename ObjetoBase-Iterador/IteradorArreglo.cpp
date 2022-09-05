#include"IteradorArreglo.h"

IteradorArreglo::IteradorArreglo(int cantidad, ObjetoBase* v[]) :
	i(0),cant(cantidad), vect(v), Iterador(){
}

IteradorArreglo::~IteradorArreglo(){}


bool IteradorArreglo::masElementos() const {
	return i < cant; 
}

ObjetoBase* IteradorArreglo::proximoElemento() {
	ObjetoBase* r = NULL; //variable comodin
	if (masElementos()) {
		r = vect[i++];
	}
	return r;
}

string IteradorArreglo::toString() { //no imprime nada se pone por la clase abstracta
	return "";
}