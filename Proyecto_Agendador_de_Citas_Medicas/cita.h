#ifndef CITA_H
#define CITA_H

#include <string>
#include "paciente.h"

class Cita {
private:
    std::string fecha;
    std::string hora;
    std::string especialidad;
    Paciente paciente;

public:
    Cita(const string& fecha, const string& hora, const string& especialidad, const Paciente& paciente);
    string getFecha() const;
    string getHora() const;
    string getEspecialidad() const;
    Paciente getPaciente() const;
};

#endif // CITA_H
