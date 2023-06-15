#ifndef CLINICA_H
#define CLINICA_H

#include <vector>
#include "cita.h"

class Clinica {
private:
    vector<Cita*> citas;

public:
    void agregarCita(Cita* cita);
    void mostrarCitas();
};

#endif // CLINICA_H
