#include "Persona.h"

Persona::Persona() {
    cedula = "indef";
    edad = 0;
    nombre = "indef";
}

Persona::Persona(string ced, string nom, int ed) {
    cedula = ced;
    nombre = nom;
    edad = ed;
}

int Persona::getEdad() {
    return edad;
}

string Persona::getNombre() {
    return nombre;
}

string Persona::getCedula() {
    return cedula;
}

TV* Persona::getTV() {
    return tv;
}

void Persona::setTV(TV& tvNuevo) {
    tv = &tvNuevo;
}

string Persona::toString() {
    stringstream s;

    s << "Cedula: " << cedula << endl
        << "Nombre: " << nombre << endl
        << "Edad: " << edad << endl;
    if (tv != NULL) {
        //Historia de la TV
        s << "TV ";
        if (tv->getEncendido() == true) {
            s << "Esta encendido" << endl
                << "En el canal: " << tv->getCanal() << endl
                << "Con volumen: " << tv->getVolumen() << endl;
        }
        else s << "Esta apagada" << endl;

    }
    else s << "No hay TV asociado"<<endl;
    return s.str();
}

Persona::~Persona() {
    delete tv;
}
