#include "TV.h"

TV::TV() {
    encendido = false;
    canal = 0;
    volumen = 0;
}

TV::TV(bool encen, int canal_, int volumen_) {
    encendido = encen;
    canal = canal_;
    volumen = volumen_;
    persona = NULL;
}

TV::~TV() {
    delete persona;
}

int TV::getVolumen() {
    return volumen;
}

int TV::getCanal() {
    return canal;
}

bool TV::getEncendido() {
    return encendido;
}

Persona* TV::getPersona() {
    return persona;
}

void TV::setPersona(Persona& pers) {
    persona = &pers;
}

string TV::toString() {
    stringstream s;

    s << "Yo soy la TV y me encuentro";
    if (encendido = true) {
        s << " Encendida" << endl
            << "En el canal " << canal << endl
            << "Y con un volumen de grado " << volumen << endl;

    }
    else s << "Apagado" << endl;
    if (persona != NULL) {
        s << "Existe una persona que esta viendo la TV" << endl
            << "Con nombre " << persona->getNombre() << endl
            << "Cedula " << persona->getCedula() << endl
            << "Edad " << persona->getEdad() << " anios"<<endl;

    }
    else s << "No hay persona asociada a esta TV"<<endl;

        return s.str();
}