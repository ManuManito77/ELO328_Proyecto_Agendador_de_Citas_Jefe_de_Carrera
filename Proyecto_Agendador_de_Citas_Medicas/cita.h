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
    Cita(const std::string& fecha, const std::string& hora, const std::string& especialidad, const Paciente& paciente);
    std::string getFecha() const;
    std::string getHora() const;
    std::string getEspecialidad() const;
    Paciente getPaciente() const;
};

#endif // CITA_H
