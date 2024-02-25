#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "TV.h"
using namespace std;

int main() {
	cout << "Dependencia Mutua" << endl;
	Persona* persona = new Persona("Juan", "Perez", 20);
	TV* tv = new TV(true, 8, 50);
	persona->setTV(*tv);
	tv->setPersona(*persona);
	cout << tv->toString()<<endl;
	cout << persona->toString();
	return 0;
};