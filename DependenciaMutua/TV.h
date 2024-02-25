#pragma once
#include <sstream>
#include <iostream>
#include "Persona.h"

using namespace std;

class Persona;

class TV {
private:
    bool encendido; //true or false
    int canal;
    int volumen;
    Persona* persona;
public:
    TV();

    TV(bool, int, int);

    virtual ~TV();

    int getVolumen();

    int getCanal();

    bool getEncendido();

    Persona* getPersona();

    void setPersona(Persona& pers);

    string toString();
};