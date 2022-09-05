#include"Nodo.h"

Nodo::Nodo(ObjetoBase* info, Nodo* siguiente) :
		_info((ObjetoBase*)info), _siguiente(siguiente) {
}

Nodo::~Nodo() {
	delete _info;
}

ObjetoBase* Nodo::obtenerInfo() const {
	return _info;
}

Nodo* Nodo::obtenerSiguiente() const {
	return _siguiente;
}

void Nodo::establecerSiguiente(Nodo* siguiente) {
	_siguiente = siguiente;
}

void Nodo::establecerInfo(ObjetoBase* info) {
	_info = (ObjetoBase*)info;
}

string Nodo::toString() const {
	return "" ;
}