#include <iostream>
#include "clinica.h"

void Clinica::programarCita(const Cita& cita) {
    citas.push_back(cita);
    cout << "Cita programada con éxito." << endl;
}

void Clinica::mostrarCitas() const {
    cout << "Citas programadas:" << endl;
    for (const auto& cita : citas) {
        cout << "Fecha: " << cita.getFecha() << ", Hora: " << cita.getHora()
                << ", Especialidad: " << cita.getEspecialidad()
                << ", Paciente: " << cita.getPaciente().getNombre() << endl;
    }
}