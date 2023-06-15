#ifndef CLINICA_H
#define CLINICA_H

#include <vector>
#include "Cita.h"

class Clinica {
private:
    std::vector<Cita> citas;

public:
    void programarCita(const Cita& cita);
    void mostrarCitas() const;
};

#endif // CLINICA_H
