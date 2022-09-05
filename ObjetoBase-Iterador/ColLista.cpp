#include"ColLista.h"
#include"ObjetoBase.h"
#include"IterLista.h"
#include<sstream>

ColLista::ColLista(): _n(0), _primero(NULL), _ultimo(NULL) {
}

ColLista::~ColLista() {
	//eliminaTodos
}

void ColLista::agregar(ObjetoBase* e) {
	Nodo* t = new Nodo(e, NULL);
	if (vacia()) {
		_primero = _ultimo = t;
	}//fin if
	else {
		_ultimo->establecerSiguiente(t);
		_ultimo = t;
	}
	_n++;
}

ObjetoBase* ColLista::obtener(int lug) const {
	ObjetoBase* r = NULL;
	if (lug < _n) {
		int p = 0;
		Nodo* _actual = _primero;
		while (p < lug) {
			p++;
			_actual = _actual->obtenerSiguiente();
		}//fin while
		r = _actual->obtenerInfo();
	}
	return r;
}

int ColLista::numElementos() const {
	return _n;
}

bool ColLista::vacia() const {
	return _primero == NULL;
}

Iterador* ColLista::obtenerIterador() const {
	return new IterLista(_primero);
}

string ColLista::toString() const {
	stringstream s;
	s << "HACERLO" << endl;
	return s.str();

}