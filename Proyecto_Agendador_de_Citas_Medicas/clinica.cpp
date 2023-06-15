#include <iostream>
#include "Clinica.h"

void Clinica::programarCita(const Cita& cita) {
    citas.push_back(cita);
    std::cout << "Cita programada con éxito." << std::endl;
}

void Clinica::mostrarCitas() const {
    std::cout << "Citas programadas:" << std::endl;
    for (const auto& cita : citas) {
        std::cout << "Fecha: " << cita.getFecha() << ", Hora: " << cita.getHora()
                  << ", Especialidad: " << cita.getEspecialidad()
                  << ", Paciente: " << cita.getPaciente().getNombre() << std::endl;
    }
}