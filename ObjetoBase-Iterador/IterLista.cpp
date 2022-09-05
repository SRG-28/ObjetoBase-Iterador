#include"IterLista.h"

IterLista::IterLista(Nodo* primero) :
	_actual(primero), Iterador() {
}

IterLista::~IterLista() {

}

bool IterLista::masElementos() const {
	return _actual != NULL; //deja de iterar cuando ve a NULL, cuando aqui es false
}

ObjetoBase* IterLista::proximoElemento() {
	ObjetoBase* r = NULL; //Variable comodin(puntero externo)
	if (masElementos()) {
		r = _actual->obtenerInfo();
		_actual = _actual->obtenerSiguiente(); //actual se pasa
	}
	return r;
}

string IterLista::toString() const {
	return "";
}