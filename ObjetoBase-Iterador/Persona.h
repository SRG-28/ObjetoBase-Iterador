#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include"ObjetoBase.h"
using namespace std;

class Persona : public ObjetoBase{
private:
	string cedula;
	string nombre;
public:
	Persona(string = "", string = "");
	virtual ~Persona();
	string toString() const ;
};

Persona::Persona(string ced, string nom) :
	cedula(ced), nombre(nom) {
}

Persona::~Persona() {

}

string Persona::toString() const {
	stringstream s;
	s << "Cedula:  " << cedula << " Nombre:  " << nombre << endl;
	return s.str(); 
}