#include "paciente.h"

Paciente::Paciente(const std::string& nombre, const std::string& contacto)
    : nombre(nombre), contacto(contacto) {}

std::string Paciente::getNombre() const {
    return nombre;
}

std::string Paciente::getContacto() const {
    return contacto;
}