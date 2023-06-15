#include "paciente.h"

Paciente::Paciente(const string& nombre, const string& contacto)
    : nombre(nombre), contacto(contacto) {}

std::string Paciente::getNombre() const {
    return nombre;
}

std::string Paciente::getContacto() const {
    return contacto;
}