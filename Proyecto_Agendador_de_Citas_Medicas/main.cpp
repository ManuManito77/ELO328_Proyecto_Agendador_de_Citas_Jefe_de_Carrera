#include "widget.h"

#include <QApplication>
#include <iostream>
#include "Clinica.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    std::cout << "Welcome!!" << std::endl;

    Clinica clinica;

    // Solicitar una cita
    std::string nombrePaciente = "Juan Perez";
    std::string contactoPaciente = "1234567890";
    Paciente paciente(nombrePaciente, contactoPaciente);

    std::string fechaCita = "2023-06-10";
    std::string horaCita = "14:30";
    std::string especialidadCita = "Cardiología";
    Cita cita(fechaCita, horaCita, especialidadCita, paciente);

    clinica.programarCita(cita);

    // Mostrar citas programadas
    clinica.mostrarCitas();

    return a.exec();
}
