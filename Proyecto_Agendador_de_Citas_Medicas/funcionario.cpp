#include "funcionario.h"

Funcionario::Funcionario(std::string nombre, std::string especialidad) {
    this->nombre = nombre;
    this->especialidad = especialidad;
}

std::string Funcionario::getNombre() {
    return nombre;
}

std::string Funcionario::getEspecialidad() {
    return especialidad;
}
