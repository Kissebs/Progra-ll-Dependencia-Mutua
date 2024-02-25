#pragma once
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
    TV* tv;
public:
    Persona();

    Persona(string, string, int);

    int getEdad();

    string getNombre();

    string getCedula();

    TV* getTV();

    void setTV(TV& tv_);

    string toString();

    virtual ~Persona();

};