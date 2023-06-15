#include "cita.h"

Cita::Cita(const string& fecha, const string& hora, const string& especialidad, const Paciente& paciente)
    : fecha(fecha), hora(hora), especialidad(especialidad), paciente(paciente) {}

string Cita::getFecha() const {
    return fecha;
}

string Cita::getHora() const {
    return hora;
}

string Cita::getEspecialidad() const {
    return especialidad;
}

Paciente Cita::getPaciente() const {
    return paciente;
}