#include "ObjetoBase.h"


ObjetoBase::~ObjetoBase() {
}


string AdaptadorBase::toString() const {
	return typeid(*this).name();    //retorna el nombre de la clase donde se esta trabajando, tema: RRTI (no lo hemos visto) 
}

ostream& operator <<(ostream& salida, const ObjetoBase& obj) {
	salida << obj.toString();
	return salida;
}

