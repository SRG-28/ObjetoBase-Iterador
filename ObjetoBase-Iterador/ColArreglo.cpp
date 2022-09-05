#include"ColArreglo.h"
#include"IteradorArreglo.h"
#include<sstream>

ColArreglo::ColArreglo(int t) :
  tam(t), can(0), vec(new ObjetoBase* [t]), Coleccion (){
}

ColArreglo::~ColArreglo() {
	//eliminarTodos
	delete[] vec;
}

void ColArreglo::agregar(ObjetoBase* e) {
	if (can < tam) { //si se puede agrear si es <
		vec[can++] = (ObjetoBase*)e;
	}
}

ObjetoBase* ColArreglo::obtener(int pos) const { //permite saber si el elemento esta en el rango, si no lo esta retorna un NULL
	if (pos >= 0 && pos < can)
		return NULL; 
}

int ColArreglo::maxElementos() const {
	return tam; //este seria el tam del vector 
}

int ColArreglo::numElementos() const {
	return can; // numero de elementos validos en el vector(si esta vacio can es igual a 0, no hay elementos en el vector)
}

bool ColArreglo::vacia() const {
	return can == 0;
}

Iterador* ColArreglo::obtenerIterador() const {
	return new IteradorArreglo(can, vec); //crea un iterador para el tipo de arreglo
}

string ColArreglo::toString() const {
	stringstream s;
	s << "--------------------Listado------------------" << endl
		<< "[";
	Iterador* i =  obtenerIterador(); //iterador para Colecccion Arreglo
	while (i->masElementos()) {
		s << *(i->proximoElemento());
		if (i->masElementos());
		s << ",";
	} //fin de while 
	delete i; 
	s << "]";
	return s.str();
}

