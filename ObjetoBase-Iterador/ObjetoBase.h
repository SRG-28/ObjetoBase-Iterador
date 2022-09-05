#pragma once
#include<iostream>
#include<string>
using namespace std;

class ObjetoBase { // <<Abstract>>
	public:
		virtual ~ObjetoBase();
		virtual string toString() const = 0; //M.V.P 
};

class AdaptadorBase: public ObjetoBase {
public:
	virtual string toString() const;

};

ostream& operator <<(ostream&, const ObjetoBase&);

