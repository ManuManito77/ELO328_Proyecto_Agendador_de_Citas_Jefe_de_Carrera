#include "cita.h"

Cita::Cita(const std::string& fecha, const std::string& hora, const std::string& especialidad, const Paciente& paciente)
    : fecha(fecha), hora(hora), especialidad(especialidad), paciente(paciente) {}

std::string Cita::getFecha() const {
    return fecha;
}

std::string Cita::getHora() const {
    return hora;
}

std::string Cita::getEspecialidad() const {
    return especialidad;
}

Paciente Cita::getPaciente() const {
    return paciente;
}