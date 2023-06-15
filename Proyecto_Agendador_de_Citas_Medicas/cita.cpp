#include "cita.h"

Cita::Cita(string fecha, string hora, string especialidad, Paciente* paciente, Funcionario* funcionario) {
    this->fecha = fecha;
    this->hora = hora;
    this->especialidad = especialidad;
    this->paciente = paciente;
    this->funcionario = funcionario;
}

std::string Cita::getFecha() {
    return fecha;
}

std::string Cita::getHora() {
    return hora;
}

std::string Cita::getEspecialidad() {
    return especialidad;
}

Paciente* Cita::getPaciente() {
    return paciente;
}

Funcionario* Cita::getFuncionario() {
    return funcionario;
}
