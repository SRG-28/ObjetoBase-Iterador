#include"ObjetoBase.h"
#include"ColArreglo.h"
#include"ColLista.h"
#include"IteradorArreglo.h"
#include"IterLista.h"
#include"Persona.h" 
using namespace std;

int main() {
	cout << "----------OBJETO BASE-------------" << endl;
	cout << "Creacion de personas" << endl;
	ObjetoBase* per = new Persona("1233455", "Anna");
	ObjetoBase* per1 = new Persona("7233455", "Juan");
	ObjetoBase* per2 = new Persona("3233455", "Ale");
	cout << "Creacion contenedor arreglo" << endl;
	int tamano = 10;
	ColArreglo* CA = new ColArreglo(tamano);

	cout << "Ingresando personas en el contenedor tipo arreglo" << endl;
	CA->agregar(per);
	CA->agregar(per1);
	CA->agregar(per2);
	cout << "Imprime personas del arreglo" << endl;
	cout << CA->toString() << endl;

	system("pause");
	return 0;
}