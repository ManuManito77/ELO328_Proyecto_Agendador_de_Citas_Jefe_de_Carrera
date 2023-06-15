#include <iostream>
#include "clinica.h"

void Clinica::agregarCita(Cita* cita) {
    citas.push_back(cita);
}

void Clinica::mostrarCitas() {
    for (Cita* cita : citas) {
        std::cout << "Fecha: " << cita->getFecha() << std::endl;
        std::cout << "Hora: " << cita->getHora() << std::endl;
        std::cout << "Especialidad: " << cita->getEspecialidad() << std::endl;
        std::cout << "Paciente: " << cita->getPaciente()->getNombre() << std::endl;
        std::cout << "Funcionario: " << cita->getFuncionario()->getNombre() << std::endl;
        std::cout << "------------------------" << std::endl;
    }
}
