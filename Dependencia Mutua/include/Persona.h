//
// Created by ESCINF on 23/02/2024.
//

#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H

#include <sstream>
#include <iostream>
#include "TV.h"

using namespace std;

class TV;

class Persona {
private:
    string cedula;
    string nombre;
    int edad;
    TV *tv;
public:
    Persona();

    Persona(string, string, int);

    int getEdad();

    string getNombre();

    string getCedula();

    TV *getTV();

    void setTV(TV *tv);

    string toString();

    virtual ~Persona();

};


#endif //UNTITLED_PERSONA_H
