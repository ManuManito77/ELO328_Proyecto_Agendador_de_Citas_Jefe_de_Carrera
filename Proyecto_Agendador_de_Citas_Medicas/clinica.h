#ifndef CLINICA_H
#define CLINICA_H

#include <vector>
#include "cita.h"

class Clinica {
private:
    vector<Cita> citas;

public:
    void programarCita(const Cita& cita);
    void mostrarCitas() const;
};

#endif // CLINICA_H
